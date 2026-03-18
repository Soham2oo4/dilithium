#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vintt_full.h"
#include <iostream>
#include <iomanip>

#define N 256

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// Clock helper
void tick(Vintt_full* top, VerilatedVcdC* tfp) {
    top->clk = 0;
    top->eval();
    if (tfp) tfp->dump(main_time++);
    
    top->clk = 1;
    top->eval();
    if (tfp) tfp->dump(main_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vintt_full* top = new Vintt_full;

    // Waveform
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("intt.vcd");

    // Reset
    top->rst = 1;
    top->start = 0;
    top->ext_we = 0;
    tick(top, tfp);
    tick(top, tfp);
    top->rst = 0;

    // =========================
    // LOAD INPUT (delta)
    // =========================
    std::cout << "Loading input...\n";
    top->ext_we = 1;

    for (int i = 0; i < N; i++) {
        top->ext_addr = i;
        top->ext_data_in = 1;
        tick(top, tfp);
    }

    top->ext_we = 0;

    // =========================
    // START INTT
    // =========================
    std::cout << "Starting INTT...\n";
    top->start = 1;
    tick(top, tfp);
    top->start = 0;

    // =========================
    // RUN until done
    // =========================
    int cycle = 0;

    while (!top->done) {
        tick(top, tfp);

        // 🔥 DEBUG PRINT (VERY IMPORTANT)
        std::cout << "Cycle " << std::setw(5) << cycle++
                  << " | state=" << (int)top->state_out
                  << " len_exp=" << (int)top->len_exp_out
                  << " start=" << (int)top->start_idx_out
                  << " j=" << (int)top->j_idx_out
                  << " k=" << (int)top->k_out
                  << " we=" << (int)top->write_en_out
                  << " web=" << (int)top->write_b_en_out
                  << " addr=" << (int)top->write_addr_out
                  << std::endl;
    }

    std::cout << "\nINTT DONE\n";

    // =========================
    // READ OUTPUT
    // =========================
    std::cout << "\nOutput (Montgomery domain):\n";

    for (int i = 0; i < N; i++) {
        top->ext_addr = i;
        tick(top, tfp);

        int32_t ip = top->ext_data_in;
        int32_t op = top->ext_data_out;

        std::cout << "[" << i << "]" << "ip: " << ip << " op: " << op << std::endl;
    }

    // Cleanup
    tfp->close();
    delete top;

    return 0;
}