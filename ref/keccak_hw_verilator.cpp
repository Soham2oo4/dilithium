// ============================================================================
// keccak_hw_verilator.cpp
//
// Verilator C++ integration wrapper for the keccak_f1600 hardware module.
// Analog of ntt_hw_verilator.cpp for the NTT hardware.
//
// Provides:
//   extern "C" void KeccakF1600_StatePermute_hw(uint64_t state[25])
//
// Called by KeccakF1600_StatePermute() in fips202.c when KECCAK_HW is defined.
// The function replaces the pure-software Keccak permutation with the
// Verilated RTL model of keccak_f1600.sv.
//
// State layout (matches fips202.c and keccak_f1600.sv):
//   state[k]  =  64-bit lane k  =  A[x = k%5, y = k/5]
//   In the flat 1600-bit port: bits [k*64+63 : k*64] = state[k]
//   Verilator wide-signal word j = bits [32j+31 : 32j]
//   ⟹  state[k] = { top->state_in[2k+1], top->state_in[2k] }
// ============================================================================

#include "Vkeccak_f1600.h"
#include "verilated.h"
#include <cstdint>
#include <cstdio>

extern "C" void KeccakF1600_StatePermute_hw(uint64_t state[25]) {
    Vkeccak_f1600 *top = new Vkeccak_f1600;

    // ---------------------------------------------------------
    // RESET  (same sequence as ntt_hw_verilator.cpp)
    // ---------------------------------------------------------
    top->rst   = 1;
    top->start = 0;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();

    top->rst = 0;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();

    // ---------------------------------------------------------
    // LOAD state_in
    // Analog of the ext_we loop that loads data into NTT RAM.
    // state[k] → Verilator words state_in[2k] (lo) + state_in[2k+1] (hi)
    // ---------------------------------------------------------
    for (int k = 0; k < 25; k++) {
        top->state_in[2*k]   = (uint32_t)(state[k]          & 0xFFFFFFFFULL);
        top->state_in[2*k+1] = (uint32_t)((state[k] >> 32)  & 0xFFFFFFFFULL);
    }

    // ---------------------------------------------------------
    // START  (one-cycle pulse, same as NTT)
    // ---------------------------------------------------------
    top->start = 1;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->start = 0;

    // ---------------------------------------------------------
    // WAIT FOR DONE
    // 24-round permutation takes 26 cycles; cap at 200 for safety.
    // ---------------------------------------------------------
    int cycles = 0;
    while (!top->done && cycles < 200) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        cycles++;
    }

    if (!top->done) {
        printf("[HW] ERROR: KeccakF1600 timeout after %d cycles\n", cycles);
        delete top;
        return;
    }

    // ---------------------------------------------------------
    // READ state_out
    // Analog of the ext_we readback loop for NTT coefficients.
    // ---------------------------------------------------------
    for (int k = 0; k < 25; k++) {
        state[k] = (uint64_t)top->state_out[2*k]
                 | ((uint64_t)top->state_out[2*k+1] << 32);
    }

    delete top;
}
