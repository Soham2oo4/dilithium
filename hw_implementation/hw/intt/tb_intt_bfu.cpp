#include "Vintt_bfu.h"
#include "verilated.h"
#include <iostream>
#include <cstdint>

int64_t montgomery_reduce(int64_t a) {
    const int64_t Q = 8380417;
    const int64_t QINV = 58728449; // 2^32 / Q mod
    int64_t t = (a * QINV) & 0xFFFFFFFF;
    int64_t r = (a - t * Q) >> 32;
    return r;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vintt_bfu *tb = new Vintt_bfu;

    // Test vectors
    int32_t test_a[] = {123456, -234567, 0, 8380416, -8380416};
    int32_t test_b[] = {654321, -123456, 0, 1, -1};
    int32_t test_zeta[] = {7, -7, 12345, -12345, 41978};

    std::cout << "a\tb\tzeta\t-> a_out\tb_out\tC ref b_out\n";

    for (int i = 0; i < 5; i++) {
        tb->a = test_a[i];
        tb->b = test_b[i];
        tb->zeta = test_zeta[i];

        tb->eval();  // evaluate combinational logic

        // Software reference
        int64_t diff = (int64_t)test_a[i] - (int64_t)test_b[i];
        int64_t sw_b = montgomery_reduce((int64_t)test_zeta[i] * diff);

        std::cout << test_a[i] << "\t"
                  << test_b[i] << "\t"
                  << test_zeta[i] << "\t-> "
                  << tb->a_out << "\t"
                  << tb->b_out << "\t"
                  << sw_b << "\n";
    }

    delete tb;
    return 0;
}