#include "Vntt_ram.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vntt_ram* ram = new Vntt_ram;
    
    // Write 100 to address 0, then read
    ram->we = 1;
    ram->addr_wr = 0;
    ram->data_in_wr = 100;
    ram->clk = 0; ram->eval();
    ram->clk = 1; ram->eval();
    
    ram->we = 0;
    ram->addr_a = 0;
    ram->addr_b = 0;
    ram->clk = 0; ram->eval();
    std::cout << "Read from addr 0 (wrote 100): " << (int)ram->data_out_a << "\n";
    
    delete ram;
    return 0;
}
