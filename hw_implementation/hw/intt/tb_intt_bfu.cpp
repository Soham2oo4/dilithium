#include "Vintt_bfu.h"
#include "verilated.h"
#include "iostream"
using namespace std;

int main(int argc, char **argv){

    Verilated::commandArgs(argc, argv);
    Vintt_bfu *top = new Vintt_bfu;

    int test_vectors[5][3] = {
        {10,20,3},
        {100,100,123},
        {0,10,222},
        {-100,50,1234},
        {1234,5678,25847}
    };

    for(int i=0;i<5;i++){
        top->a = test_vectors[i][0];
        top->b = test_vectors[i][1];
        top->zeta = test_vectors[i][2];

        top->eval();

        std::cout << "a=" << (uint32_t)top->a
                << " b=" << (uint32_t)top->b
                << " zeta=" << (uint32_t)top->zeta
                << " -> a_out=" << (uint32_t)top->a_out
                << " b_out=" << (uint32_t)top->b_out << std::endl;
    }
}