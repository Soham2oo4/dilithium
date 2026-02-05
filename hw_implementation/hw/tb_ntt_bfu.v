`timescale 1ns/1ps

module tb_ntt_bfu;

    reg signed [31:0] a, b, zeta;        // widened to 32-bit signed to match DUT
    wire signed [31:0] a_out, b_out;

    // Instantiate DUT
    ntt_bfu dut (
        .a(a),
        .b(b),
        .zeta(zeta),
        .a_out(a_out),
        .b_out(b_out)
    );

    // Test vectors and display are handled by the C++ harness (tb_main.cpp)

endmodule
