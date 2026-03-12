// ============================================================================
// tb_keccak_f1600.cpp
//
// Standalone Verilator testbench for keccak_f1600.sv
// Analog of tb_ntt_full.cpp for the NTT hardware.
//
// Compares hardware KeccakF1600 permutation against the software reference.
// The SW reference (KeccakF1600_StatePermute_pub) is pulled from fips202.c.
// ============================================================================

#include "Vkeccak_f1600.h"
#include "verilated.h"
#include <cstdint>
#include <cstdio>
#include <cstring>

// Public wrapper around the static KeccakF1600_StatePermute() in fips202.c.
// (Added to fips202.c alongside the KECCAK_HW changes.)
extern "C" void KeccakF1600_StatePermute_pub(uint64_t state[25]);

// ---- helpers ---------------------------------------------------------------

static void tick(Vkeccak_f1600 *top) {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
}

// Load 25 uint64_t lanes into the flat 1600-bit state_in Verilator port.
// Verilator stores wide signals as uint32_t words; word j = bits [32j+31:32j].
// state[k] occupies bits [k*64+63 : k*64]  →  words [2k+1, 2k].
static void load_state(Vkeccak_f1600 *top, const uint64_t state[25]) {
    for (int k = 0; k < 25; k++) {
        top->state_in[2*k]   = (uint32_t)(state[k]          & 0xFFFFFFFFULL);
        top->state_in[2*k+1] = (uint32_t)((state[k] >> 32)  & 0xFFFFFFFFULL);
    }
}

// Read 25 uint64_t lanes from the flat 1600-bit state_out Verilator port.
static void read_state(Vkeccak_f1600 *top, uint64_t state[25]) {
    for (int k = 0; k < 25; k++) {
        state[k] = (uint64_t)top->state_out[2*k]
                 | ((uint64_t)top->state_out[2*k+1] << 32);
    }
}

// Run one test: permute hw_state in HW, compare against sw_state permuted by SW.
static bool run_test(const char *name, uint64_t hw_state[25], uint64_t sw_state[25]) {
    printf("\n=== %s ===\n", name);

    Vkeccak_f1600 *top = new Vkeccak_f1600;

    // --- Reset (same as NTT testbench) ---
    top->rst   = 1;
    top->start = 0;
    tick(top);
    top->rst = 0;
    tick(top);

    // --- Load state_in (analog: ext_we RAM load in NTT) ---
    load_state(top, hw_state);

    // --- Start permutation ---
    top->start = 1;
    tick(top);
    top->start = 0;

    // --- Wait for done (analog: polling top->done in NTT) ---
    int cycles = 0;
    printf("Cycle | state\n");
    printf("------|------\n");
    while (!top->done && cycles < 200) {
        printf("%5d |  running...\n", cycles);
        tick(top);
        cycles++;
    }

    if (!top->done) {
        printf("TIMEOUT: HW never asserted done!\n");
        delete top;
        return false;
    }
    printf("Done after %d cycles\n", cycles);

    // --- Read back HW result ---
    read_state(top, hw_state);
    delete top;

    // --- Run SW reference ---
    KeccakF1600_StatePermute_pub(sw_state);

    // --- Compare ---
    bool pass = true;
    printf("\n Lane |        HW result        |        SW result        | Match\n");
    printf("------|-------------------------|-------------------------|------\n");
    for (int k = 0; k < 25; k++) {
        bool match = (hw_state[k] == sw_state[k]);
        printf(" %4d | %016llx | %016llx |  %s\n",
               k,
               (unsigned long long)hw_state[k],
               (unsigned long long)sw_state[k],
               match ? "OK" : "FAIL");
        if (!match) pass = false;
    }

    if (pass)
        printf("\nPASS: all 25 lanes match the SW reference.\n");
    else
        printf("\nFAIL: lane mismatch — check RTL.\n");

    return pass;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    bool all_pass = true;

    // ------------------------------------------------------------------
    // Test 1: all-zero state  (simplest sanity check)
    // ------------------------------------------------------------------
    {
        uint64_t hw[25] = {};
        uint64_t sw[25] = {};
        all_pass &= run_test("Test 1: all-zero state", hw, sw);
    }

    // ------------------------------------------------------------------
    // Test 2: non-trivial input
    // ------------------------------------------------------------------
    {
        uint64_t hw[25], sw[25];
        for (int k = 0; k < 25; k++) {
            // spread a recognisable pattern across all 25 lanes
            hw[k] = sw[k] = ((uint64_t)(k + 1) * 0x0102030405060708ULL)
                           ^ ((uint64_t)(24 - k) << 32);
        }
        all_pass &= run_test("Test 2: patterned input", hw, sw);
    }

    // ------------------------------------------------------------------
    // Test 3: single bit set (lane 0, bit 0)
    // ------------------------------------------------------------------
    {
        uint64_t hw[25] = {};
        uint64_t sw[25] = {};
        hw[0] = sw[0] = 1ULL;
        all_pass &= run_test("Test 3: single-bit input (lane 0 bit 0)", hw, sw);
    }

    printf("\n=== Summary: %s ===\n", all_pass ? "ALL TESTS PASSED" : "SOME TESTS FAILED");
    return all_pass ? 0 : 1;
}
