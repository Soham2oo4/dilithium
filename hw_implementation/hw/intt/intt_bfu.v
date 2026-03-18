`timescale 1ns/1ps
module intt_bfu (
    input  signed [31:0] a,
    input  signed [31:0] b,
    input  signed [31:0] zeta,
    input  scale_mode,
    output signed [31:0] a_out,
    output signed [31:0] b_out
);

    localparam signed [63:0] Q = 64'd8380417;
    localparam signed [31:0] QINV = 32'd58728449;
    localparam signed [31:0] F = 32'd41978;

    // =========================
    // ⭐ Negate zeta for INTT
    // =========================
    wire signed [31:0] zeta_neg = -zeta;

    // =========================
    // Butterfly path
    // =========================
    wire signed [31:0] t = a;
    wire signed [31:0] temp = t - b;

    wire signed [63:0] mul_bfly = $signed(zeta_neg) * $signed(temp);
    wire signed [63:0] mul_qinv_bfly = mul_bfly * $signed(QINV);
    wire signed [31:0] t_low_bfly = mul_qinv_bfly[31:0];
    wire signed [63:0] t_red_bfly = mul_bfly - ($signed(t_low_bfly) * Q);
    wire signed [31:0] reduced_bfly = t_red_bfly[63:32];

    // =========================
    // Scaling path
    // =========================
    wire signed [63:0] mul_scale = $signed(F) * $signed(a);
    wire signed [63:0] mul_qinv_scale = mul_scale * $signed(QINV);
    wire signed [31:0] t_low_scale = mul_qinv_scale[31:0];
    wire signed [63:0] t_red_scale = mul_scale - ($signed(t_low_scale) * Q);
    wire signed [31:0] reduced_scale = t_red_scale[63:32];

    // =========================
    // Output mux
    // =========================
    assign a_out = scale_mode ? reduced_scale : (t + b);
    assign b_out = scale_mode ? 32'd0       : reduced_bfly;

endmodule