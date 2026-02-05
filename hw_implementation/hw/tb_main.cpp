#include "Vntt_bfu.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vntt_bfu* top = new Vntt_bfu;

    // First test vector
    top->a = 10;
    top->b = 20;
    top->zeta = 123456;
    top->eval();

    std::cout << "Inputs: a=" << (int32_t)top->a << " b=" << (int32_t)top->b << " zeta=" << (int32_t)top->zeta << "\n";
    std::cout << "Outputs: a_out=" << (int32_t)top->a_out << " b_out=" << (int32_t)top->b_out << "\n";

    // Second test vector
    top->a = 1000;
    top->b = 2000;
    top->zeta = 12345;
    top->eval();

    std::cout << "Inputs: a=" << (int32_t)top->a << " b=" << (int32_t)top->b << " zeta=" << (int32_t)top->zeta << "\n";
    std::cout << "Outputs: a_out=" << (int32_t)top->a_out << " b_out=" << (int32_t)top->b_out << "\n";

    top->final();
    delete top;
    return 0;
}
