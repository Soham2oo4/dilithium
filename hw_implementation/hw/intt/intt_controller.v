`timescale 1ns/1ps

module ntt_controller (
input  clk,
input  rst,
input  start,
input  mode,          // 0 = NTT, 1 = INTT
output reg done,

output reg [8:0] k,
output reg [7:0] j,
output reg [7:0] j_plus_len,
output reg bfu_valid,
output reg write_en,
output reg write_b_en,

// instrumentation
output reg [2:0] state_out,
output reg [2:0] len_exp_out,
output reg [7:0] start_idx_out,
output reg [7:0] j_idx_out,
output reg [8:0] k_out

);

localparam IDLE       = 3'd0;
localparam COMPUTE    = 3'd1;
localparam WRITE_A    = 3'd2;
localparam WRITE_B    = 3'd3;
localparam DONE_STATE = 3'd4;

reg [2:0] state;
reg [2:0] len_exp;
reg [7:0] start_idx;
reg [7:0] j_idx;
reg [8:0] k_idx;

// length depending on mode
wire [7:0] len_ntt  = 8'd128 >> len_exp;
wire [7:0] len_intt = 8'd1   << len_exp;
wire [7:0] len_val  = mode ? len_intt : len_ntt;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        state <= IDLE;
        len_exp <= 3'd0;
        start_idx <= 8'd0;
        j_idx <= 8'd0;

        k_idx <= 9'd1;
        k <= 9'd1;

        j <= 8'd0;
        j_plus_len <= 8'd0;

        bfu_valid <= 0;
        write_en <= 0;
        write_b_en <= 0;
        done <= 0;

    end else begin

        // output assignments
        k <= k_idx;
        j <= j_idx;
        j_plus_len <= j_idx + len_val;

        state_out <= state;
        len_exp_out <= len_exp;
        start_idx_out <= start_idx;
        j_idx_out <= j_idx;
        k_out <= k_idx;

        case(state)

            IDLE: begin
                done <= 0;
                bfu_valid <= 0;
                write_en <= 0;
                write_b_en <= 0;

                if(start) begin
                    state <= COMPUTE;
                    len_exp <= 0;
                    start_idx <= 0;
                    j_idx <= 0;

                    // k initialization
                    k_idx <= mode ? 9'd256 : 9'd1;
                end
            end

            COMPUTE: begin
                bfu_valid <= 1;
                write_en <= 0;
                write_b_en <= 0;
                state <= WRITE_A;
            end

            WRITE_A: begin
                bfu_valid <= 0;
                write_en <= 1;
                write_b_en <= 0;
                state <= WRITE_B;
            end

            WRITE_B: begin
                write_en <= 0;
                write_b_en <= 1;

                // finished j loop?
                if((j_idx + 1) == (start_idx + len_val)) begin

                    // update zeta index
                    if(mode)
                        k_idx <= k_idx - 1;
                    else
                        k_idx <= k_idx + 1;

                    // next start block
                    if((start_idx + 2*len_val) < 256) begin
                        start_idx <= start_idx + 2*len_val;
                        j_idx <= start_idx + 2*len_val;
                        state <= COMPUTE;
                    end

                    // next stage
                    else if(len_exp < 7) begin
                        len_exp <= len_exp + 1;
                        start_idx <= 0;
                        j_idx <= 0;
                        state <= COMPUTE;
                    end

                    else begin
                        state <= DONE_STATE;
                    end
                end

                else begin
                    j_idx <= j_idx + 1;
                    state <= COMPUTE;
                end
            end

            DONE_STATE: begin
                done <= 1;
                state <= IDLE;
            end

        endcase
    end
end

endmodule
