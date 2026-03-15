// test_intt_full.cpp
#include "Vintt_full.h"
#include "verilated.h"
#include <iostream>
#include <vector>
#include <cassert>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vintt_full* top = new Vintt_full;

    bool clk = 0;

    // Reset and initialize
    top->clk = clk;
    top->rst = 1;
    top->start = 0;
    top->ext_we = 0;
    top->ext_addr = 0;
    top->ext_data_in = 0;
    top->ext_data_out = 0;

    // Toggle clock for a few cycles to assert reset
    for(int i=0; i<5; i++) {
        top->clk = 1; top->eval();
        top->clk = 0; top->eval();
    }

    // ===== Load 256-point input: delta = [1,0,0,...,0] =====
    top->rst = 1;
    for(int i=0;i<256;i++) {
        top->ext_addr = i;
        top->ext_data_in = (i==0) ? 1 : 0;
        top->ext_we = 1;

        top->clk = 1; top->eval();
        top->clk = 0; top->eval();
    }
    top->ext_we = 0;
    top->rst = 0;

    // ===== Start INTT =====
    top->start = 1;
    top->clk = 1; top->eval();
    top->clk = 0; top->eval();
    top->start = 0;

    // Clock until done
    int cycles = 0;
    const int max_cycles = 10000;
    while(!top->done && cycles < max_cycles) {
        top->clk = 1; top->eval();
        top->clk = 0; top->eval();
        cycles++;
    }

    if(cycles >= max_cycles) {
        std::cerr << "ERROR: INTT did not finish within " << max_cycles << " cycles!\n";
        return 1;
    }

    std::cout << "INTT finished in " << cycles << " cycles.\n";

    // ===== Read back output =====
    std::vector<int32_t> result(256);
    for(int i=0;i<256;i++) {
        top->ext_addr = i;
        top->clk = 1; top->eval();
        top->clk = 0; top->eval();
        result[i] = top->ext_data_out;
    }

    // ===== Verify output =====
    bool pass = true;
    for(int i=0;i<256;i++) {
        if(result[i] != 1) {  // delta INTT should give all 1s
            pass = false;
            std::cout << "a["<<i<<"]=" << result[i] << " (expected 1)\n";
        }
    }

    if(pass) std::cout << "SUCCESS: INTT recovered all ones.\n";
    else     std::cout << "FAIL: INTT output mismatch.\n";

    top->final();
    delete top;
    return 0;
}