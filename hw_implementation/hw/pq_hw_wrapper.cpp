#include "Vntt_full.h"
#include "verilated.h"
#include <cstdint>

extern "C" void pqcrystals_dilithium2_ref_ntt(int32_t a[256]) {
    Verilated::commandArgs(0, nullptr);
    Vntt_full *top = new Vntt_full;

    // reset
    top->rst = 1; top->start = 0; top->ext_we = 0;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->rst = 0;

    // load RAM
    top->ext_we = 1;
    for (int i = 0; i < 256; ++i) {
        top->ext_addr = i;
        top->ext_data_in = a[i];
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
    top->ext_we = 0;

    // start NTT
    top->start = 1;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->start = 0;

    // wait for done (guarded loop)
    int cycles = 0;
    while (!top->done && cycles < 20000) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        ++cycles;
    }

    // read back results
    top->ext_we = 1;
    for (int i = 0; i < 256; ++i) {
        top->ext_addr = i;
        top->clk = 0; top->eval();
        a[i] = top->ext_data_out;
        top->clk = 1; top->eval();
    }
    top->ext_we = 0;

    delete top;
}