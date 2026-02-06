#include "Vntt_full.h"
#include "verilated.h"
#include <iostream>
#include <cstdint>

extern "C" {
    void pqcrystals_dilithium2_ref_ntt(int32_t a[256]);
}

int main() {
    Verilator::commandArgs(0, NULL);
    Vntt_full* top = new Vntt_full;
    
    // Reset
    top->rst = 1;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->rst = 0;
    
    // Load test input: [1, 2, 0, 0, ...]
    std::cout << "Loading [1, 2, 0, 0, ...]\n";
    top->ext_we = 1;
    for (int i = 0; i < 256; i++) {
        top->ext_addr = i;
        top->ext_data_in = (i == 0) ? 1 : ((i == 1) ? 2 : 0);
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
    top->ext_we = 0;
    
    // Read back to verify load
    std::cout << "Verify load: ";
    for (int i = 0; i < 5; i++) {
        top->ext_we = 1;
        top->ext_addr = i;
        top->clk = 0; top->eval();
        std::cout << top->ext_data_out << " ";
    }
    std::cout << "\n";
    
    // Start NTT
    top->ext_we = 0;
    top->rst = 1;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->rst = 0;
    top->start = 1;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->start = 0;
    
    // Trace first 20 cycles
    std::cout << "\nFirst 20 cycles of NTT:\n";
    for (int c = 0; c < 20; c++) {
        std::cout << "C=" << c 
                  << " state=" << (int)top->state_out 
                  << " len_exp=" << (int)top->len_exp_out
                  << " j_idx=" << (int)top->j_idx_out
                  << " k_idx=" << (int)top->k_out
                  << " bfu_valid=" << (int)top->bfu_valid_out << "\n";
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
    
    // Run to completion
    int cycles = 20;
    while (!top->done && cycles < 10000) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        cycles++;
    }
    std::cout << "Completed in " << cycles << " cycles\n";
    
    // Read output
    int32_t output_hw[256];
    for (int i = 0; i < 256; i++) {
        top->ext_we = 1;
        top->ext_addr = i;
        top->clk = 0; top->eval();
        output_hw[i] = top->ext_data_out;
    }
    
    // Compare with software
    int32_t input_sw[256] = {0};
    input_sw[0] = 1;
    input_sw[1] = 2;
    pqcrystals_dilithium2_ref_ntt(input_sw);
    
    std::cout << "\nComparison (first 20):\n";
    int matches = 0, mismatches = 0;
    for (int i = 0; i < 20; i++) {
        bool match = (output_hw[i] == input_sw[i]);
        std::cout << "  [" << i << "] HW=" << output_hw[i] 
                  << " SW=" << input_sw[i] 
                  << (match ? " ✓" : " ✗") << "\n";
        if (match) matches++;
        else mismatches++;
    }
    std::cout << "\n" << matches << " matches, " << mismatches << " mismatches\n";
    
    delete top;
    return (mismatches > 0) ? 1 : 0;
}
