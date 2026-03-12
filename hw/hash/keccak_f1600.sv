`timescale 1ns/1ps
// ============================================================================
// keccak_f1600.sv
//
// Top-level KeccakF1600 permutation module for Dilithium Keccak hardware.
// Analog of ntt_full.v — same start/done handshake pattern.
//
// Architecture (mirroring ntt_full.v):
//   ┌─────────────────────────────────────────────────┐
//   │  keccak_f1600  (this file)                      │
//   │                                                  │
//   │   ┌──────────────────────┐                       │
//   │   │  keccak_round        │  ← pure combinational │
//   │   │  (theta/pi/rho/chi/  │    one full round      │
//   │   │   iota)              │    per clock cycle     │
//   │   └──────────────────────┘                       │
//   │   ┌──────────────────────┐                       │
//   │   │ keccak_round_consts  │  ← round constant ROM │
//   │   └──────────────────────┘                       │
//   │   ┌──────────────────────┐                       │
//   │   │  state register      │  ← 1600-bit state reg │
//   │   └──────────────────────┘                       │
//   │   ┌──────────────────────┐                       │
//   │   │  FSM controller      │  ← IDLE/RUN/DONE      │
//   │   │  (analog of          │    24-round counter    │
//   │   │  ntt_controller.v)   │                        │
//   │   └──────────────────────┘                       │
//   └─────────────────────────────────────────────────┘
//
// Interface:
//   clk, rst, start  → same as ntt_full.v
//   done             → same as ntt_full.v
//   state_in[1599:0] → flat input state: bits [k*64+63:k*64] = lane k
//   state_out[1599:0]→ flat output state (valid when done=1)
//
// Lane mapping (matches reference fips202.c state[25]):
//   lane k = k_state[y=k/5][x=k%5],  bits state_in[k*64+63 : k*64]
//
// Latency: 26 clock cycles from start pulse to done assertion.
//   (1 cycle load + 24 round cycles + 1 DONE cycle)
// ============================================================================

import pkg_keccak::k_state;
import pkg_keccak::N;          // N=64 (lane width in bits)

module keccak_f1600 (
    input  logic            clk,
    input  logic            rst,
    input  logic            start,
    output logic            done,
    // Flat 1600-bit Keccak state.
    // Bit layout: state_in[k*64+63 : k*64] = state lane k  (k = y*5 + x)
    input  logic [1599:0]   state_in,
    output logic [1599:0]   state_out
);

    // ---------------------------------------------------------------
    // FSM states  (analog: IDLE / COMPUTE+WRITE / DONE in ntt_ctrl)
    // ---------------------------------------------------------------
    localparam [1:0] IDLE    = 2'd0;
    localparam [1:0] RUN     = 2'd1;
    localparam [1:0] DONE_ST = 2'd2;

    logic [1:0] fsm_state;
    logic [4:0] round_cnt;   // 0..23, counts which Keccak round we're on

    // ---------------------------------------------------------------
    // State register  (analog: the RAM in ntt_full.v)
    // ---------------------------------------------------------------
    k_state reg_state;

    // ---------------------------------------------------------------
    // Wire connections between state register and keccak_round
    // ---------------------------------------------------------------
    k_state round_in_s, round_out_s;
    logic [N-1:0] round_constant;

    genvar y, x, i;

    // reg_state  →  keccak_round input
    generate
        for (y = 0; y <= 4; y++)
            for (x = 0; x <= 4; x++)
                for (i = 0; i <= N-1; i++)
                    assign round_in_s[y][x][i] = reg_state[y][x][i];
    endgenerate

    // reg_state  →  state_out (flat, always combinational)
    generate
        for (y = 0; y <= 4; y++)
            for (x = 0; x <= 4; x++)
                for (i = 0; i <= N-1; i++)
                    assign state_out[(y*5*N) + (x*N) + i] = reg_state[y][x][i];
    endgenerate

    // state_in (flat)  →  loaded_state (k_state) for loading on start
    k_state loaded_state;
    generate
        for (y = 0; y <= 4; y++)
            for (x = 0; x <= 4; x++)
                for (i = 0; i <= N-1; i++)
                    assign loaded_state[y][x][i] = state_in[(y*5*N) + (x*N) + i];
    endgenerate

    // ---------------------------------------------------------------
    // keccak_round  (analog: ntt_bfu.v — purely combinational)
    // One full Keccak round = θ → ρ → π → χ → ι
    // ---------------------------------------------------------------
    keccak_round round_inst (
        .Round_in               (round_in_s),
        .Round_constant_signal  (round_constant),
        .Round_out              (round_out_s)
    );

    // ---------------------------------------------------------------
    // Round constants ROM  (analog: zetas_rom.v)
    // ---------------------------------------------------------------
    keccak_round_constants_gen rc_inst (
        .round_number               (round_cnt),
        .round_constant_signal_out  (round_constant)
    );

    // ---------------------------------------------------------------
    // FSM + state register update
    // (analog: ntt_controller.v inside ntt_full.v)
    //
    // Timing:
    //   IDLE : latch state_in, round_cnt=0, goto RUN
    //   RUN  : each cycle — apply one keccak_round, increment counter
    //          after round 23: goto DONE_ST
    //   DONE : assert done for one cycle, goto IDLE
    // ---------------------------------------------------------------
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            fsm_state <= IDLE;
            round_cnt <= 5'd0;
            done      <= 1'b0;
            reg_state <= '0;
        end else begin
            case (fsm_state)

                IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        reg_state <= loaded_state;   // latch input (like ext_we load into RAM)
                        round_cnt <= 5'd0;
                        fsm_state <= RUN;
                    end
                end

                RUN: begin
                    // Apply one round per clock cycle (combinational keccak_round)
                    reg_state <= round_out_s;
                    if (round_cnt == 5'd23) begin
                        fsm_state <= DONE_ST;        // 24 rounds complete
                    end else begin
                        round_cnt <= round_cnt + 5'd1;
                    end
                end

                DONE_ST: begin
                    done      <= 1'b1;               // pulse done (like ntt_full done)
                    fsm_state <= IDLE;
                end

                default: fsm_state <= IDLE;

            endcase
        end
    end

endmodule
