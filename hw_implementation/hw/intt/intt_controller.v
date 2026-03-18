`timescale 1ns/1ps

module intt_controller (
    input  clk,
    input  rst,
    input  start,
    output reg done,
    
    output reg [8:0] k,
    output reg [7:0] j,
    output reg [7:0] j_plus_len,
    output reg bfu_valid,
    output reg write_en,
    output reg write_b_en,
    output reg scale_mode,

    // Instrumentation
    output reg [2:0] state_out,
    output reg [2:0] len_exp_out,
    output reg [7:0] start_idx_out,
    output reg [7:0] j_idx_out,
    output reg [8:0] k_out
);

    // =========================
    // STATES
    // =========================
    localparam IDLE       = 3'd0;
    localparam COMPUTE    = 3'd1;
    localparam WRITE_A    = 3'd2;
    localparam WRITE_B    = 3'd3;
    localparam SCALE      = 3'd4;
    localparam SCALE_LAST = 3'd5;
    localparam DONE_STATE = 3'd6;

    reg [2:0] state;

    // =========================
    // LOOP VARIABLES
    // =========================
    reg [2:0] len_exp;     // 0 → 7  => len = 1 → 128
    reg [7:0] start_idx;
    reg [7:0] j_idx;
    reg [8:0] k_idx;       // for zetas
    reg [7:0] scale_idx;

    wire [7:0] len_val = 8'd1 << len_exp;

    // =========================
    // MAIN FSM
    // =========================
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;

            len_exp <= 0;
            start_idx <= 0;
            j_idx <= 0;
            k_idx <= 9'd256;

            scale_idx <= 0;

            k <= 0;
            j <= 0;
            j_plus_len <= 0;

            bfu_valid <= 0;
            write_en <= 0;
            write_b_en <= 0;
            scale_mode <= 0;

            done <= 0;

        end else begin

            // Default outputs
            // In invntt, k is decremented before use; output k should lag k_idx by one.
            k <= k_idx - 1;
            j <= j_idx;
            j_plus_len <= j_idx + len_val;

            // Instrumentation
            state_out <= state;
            len_exp_out <= len_exp;
            start_idx_out <= start_idx;
            j_idx_out <= j_idx;
            k_out <= k_idx;

            case (state)

            // =========================
            IDLE: begin
                done <= 0;
                bfu_valid <= 0;
                write_en <= 0;
                write_b_en <= 0;
                scale_mode <= 0;

                if (start) begin
                    state <= COMPUTE;

                    len_exp <= 0;       // len = 1
                    start_idx <= 0;
                    j_idx <= 0;
                    k_idx <= 9'd256;   // will decrement before use
                end
            end

            // =========================
            // COMPUTE
            COMPUTE: begin
                bfu_valid <= 1;
                write_en <= 0;
                write_b_en <= 0;
                scale_mode <= 0;

                state <= WRITE_A;
            end

            // =========================
            WRITE_A: begin
                bfu_valid <= 0;
                write_en <= 1;
                write_b_en <= 0;
                scale_mode <= 0;

                state <= WRITE_B;
            end

            // =========================
            WRITE_B: begin
                write_en <= 0;
                write_b_en <= 1;
                bfu_valid <= 0;
                scale_mode <= 0;

                // End of inner j loop?
                if ((j_idx + 1) == (start_idx + len_val)) begin

                    // Decrement zeta index once per group (matches invntt reference)
                    k_idx <= k_idx - 1;

                    // Next start?
                    if ((start_idx + 2*len_val) < 256) begin
                        start_idx <= start_idx + 2*len_val;
                        j_idx <= start_idx + 2*len_val;
                        state <= COMPUTE;

                    end else if (len_exp < 3'd7) begin
                        // Next stage (len doubles)
                        len_exp <= len_exp + 1;
                        start_idx <= 0;
                        j_idx <= 0;
                        state <= COMPUTE;

                    end else begin
                        // Done butterflies → go to scaling
                        state <= SCALE;
                        scale_idx <= 0;
                    end

                end else begin
                    // Continue j loop
                    j_idx <= j_idx + 1;
                    state <= COMPUTE;
                end
            end

            // =========================
            // FINAL SCALING LOOP
            SCALE: begin
                scale_mode <= 1;
                bfu_valid <= 1;
                write_en <= 1;
                write_b_en <= 0;

                j_idx <= scale_idx;   // ✅ FIX: no direct j assignment

                if (scale_idx == 8'd255) begin
                    state <= SCALE_LAST;
                end else begin
                    scale_idx <= scale_idx + 1;
                end
            end

            SCALE_LAST: begin
                // j_idx now holds 255, let the write complete
                scale_mode <= 1;
                bfu_valid <= 0;
                write_en <= 1;
                write_b_en <= 0;
                state <= DONE_STATE;
            end

            // =========================
            DONE_STATE: begin
                done <= 1;
                bfu_valid <= 0;
                write_en <= 0;
                write_b_en <= 0;
                scale_mode <= 0;

                state <= IDLE;
            end

            default: state <= IDLE;

            endcase
        end
    end

endmodule