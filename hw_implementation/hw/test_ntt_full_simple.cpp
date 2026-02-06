#include "Vntt_full.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vntt_full* top = new Vntt_full;
    
    // Reset
    top->rst = 1;
    top->start = 0;
    top->ext_we = 0;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->rst = 0;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    
    std::cout << "Testing write/read cycle 1: Write 42 to addr 5\n";
    
    // Write 42 to address 5
    top->ext_we = 1;
    top->ext_addr = 5;
    top->ext_data_in = 42;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    
    // Write 99 to address 10
    top->ext_addr = 10;
    top->ext_data_in = 99;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    
    // Now read them back multiple times
    top->ext_we = 0;
    for (int i = 0; i < 5; i++) {
        top->ext_addr = 5;
        top->clk = 0; top->eval();
        std::cout << "  Cycle " << i << ": Read addr 5: " << (int)top->ext_data_out << " (expect 42)\n";
        top->clk = 1; top->eval();
    }
    
    std::cout << "Now reading from addr 10:\n";
    for (int i = 0; i < 5; i++) {
        top->ext_addr = 10;
        top->clk = 0; top->eval();
        std::cout << "  Cycle " << i << ": Read addr 10: " << (int)top->ext_data_out << " (expect 99)\n";
        top->clk = 1; top->eval();
    }
    
    delete top;
    return 0;
}
