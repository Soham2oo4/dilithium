// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintt_full__Syms.h"


VL_ATTR_COLD void Vintt_full___024root__trace_init_sub__TOP__0(Vintt_full___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"ext_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"ext_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ext_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"ext_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"len_exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"start_idx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"j_idx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"k_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+53,0,"write_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"write_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"write_b_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"j_reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"j_plus_len_reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+58,0,"bfu_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"j_comb_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"j_plus_len_comb_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("intt_full", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"ext_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"ext_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"ext_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"ext_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"len_exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"start_idx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"j_idx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"k_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+53,0,"write_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"write_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"write_b_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"j_reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"j_plus_len_reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+58,0,"bfu_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"j_comb_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"j_plus_len_comb_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+24,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"j_plus_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+26,0,"bfu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"write_b_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"scale_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"ram_out_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"ram_out_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"bfu_a_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"bfu_b_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"zeta_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"bfu_a_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"bfu_b_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"internal_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"ram_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"ram_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+66,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"j_reg_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"j_plus_len_reg_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("bfu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"zeta",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"scale_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+70,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+72,0,"QINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"zeta_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+3,0,"mul_bfly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"mul_qinv_bfly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"t_low_bfly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+8,0,"t_red_bfly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+10,0,"reduced_bfly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+11,0,"mul_scale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"mul_qinv_scale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"t_low_scale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+16,0,"t_red_scale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+18,0,"reduced_scale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"k",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+24,0,"j",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"j_plus_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+26,0,"bfu_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"write_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"write_b_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"scale_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"len_exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"start_idx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"j_idx_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"k_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+74,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+75,0,"COMPUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"WRITE_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,0,"WRITE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"SCALE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"SCALE_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"DONE_STATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"len_exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"start_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"j_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"k_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+38,0,"scale_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"len_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ram_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"data_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"data_out_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"addr_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+67,0,"data_in_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("zeta_rom_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+30,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vintt_full___024root__trace_init_top(Vintt_full___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_init_top\n"); );
    // Body
    Vintt_full___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vintt_full___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vintt_full___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintt_full___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintt_full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vintt_full___024root__trace_register(Vintt_full___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vintt_full___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vintt_full___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vintt_full___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vintt_full___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vintt_full___024root__trace_const_0_sub_0(Vintt_full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vintt_full___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_const_0\n"); );
    // Init
    Vintt_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintt_full___024root*>(voidSelf);
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vintt_full___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vintt_full___024root__trace_const_0_sub_0(Vintt_full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+70,(0x7fe001ULL),64);
    bufp->fullIData(oldp+72,(0x3802001U),32);
    bufp->fullIData(oldp+73,(0xa3faU),32);
    bufp->fullCData(oldp+74,(0U),3);
    bufp->fullCData(oldp+75,(1U),3);
    bufp->fullCData(oldp+76,(2U),3);
    bufp->fullCData(oldp+77,(3U),3);
    bufp->fullCData(oldp+78,(4U),3);
    bufp->fullCData(oldp+79,(5U),3);
    bufp->fullCData(oldp+80,(6U),3);
}

VL_ATTR_COLD void Vintt_full___024root__trace_full_0_sub_0(Vintt_full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vintt_full___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_full_0\n"); );
    // Init
    Vintt_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintt_full___024root*>(voidSelf);
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vintt_full___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vintt_full___024root__trace_full_0_sub_0(Vintt_full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->intt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->intt_full__DOT__bfu_a_out),32);
    bufp->fullQData(oldp+3,(vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly),64);
    bufp->fullQData(oldp+5,(VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly)),64);
    bufp->fullIData(oldp+7,((IData)(VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly))),32);
    bufp->fullQData(oldp+8,((vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly 
                             - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                           VL_EXTENDS_QI(64,32, (IData)(
                                                                        VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly)))))),64);
    bufp->fullIData(oldp+10,((IData)(((vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly 
                                       - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                     VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly))))) 
                                      >> 0x20U))),32);
    bufp->fullQData(oldp+11,(VL_MULS_QQQ(64, 0xa3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0)),64);
    bufp->fullQData(oldp+13,(VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0)),64);
    bufp->fullIData(oldp+15,((IData)(VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0))),32);
    bufp->fullQData(oldp+16,((VL_MULS_QQQ(64, 0xa3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0) 
                              - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                            VL_EXTENDS_QI(64,32, (IData)(
                                                                         VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0)))))),64);
    bufp->fullIData(oldp+18,((IData)(((VL_MULS_QQQ(64, 0xa3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0) 
                                       - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                     VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0))))) 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+19,(vlSelf->intt_full__DOT__bfu_a_out_reg),32);
    bufp->fullIData(oldp+20,(vlSelf->intt_full__DOT__bfu_b_out_reg),32);
    bufp->fullCData(oldp+21,(vlSelf->intt_full__DOT__j_reg_debug),8);
    bufp->fullCData(oldp+22,(vlSelf->intt_full__DOT__j_plus_len_reg_debug),8);
    bufp->fullSData(oldp+23,(vlSelf->intt_full__DOT__k),9);
    bufp->fullCData(oldp+24,(vlSelf->intt_full__DOT__j),8);
    bufp->fullCData(oldp+25,(vlSelf->intt_full__DOT__j_plus_len),8);
    bufp->fullBit(oldp+26,(vlSelf->intt_full__DOT__bfu_valid));
    bufp->fullBit(oldp+27,(vlSelf->intt_full__DOT__write_en));
    bufp->fullBit(oldp+28,(vlSelf->intt_full__DOT__write_b_en));
    bufp->fullBit(oldp+29,(vlSelf->intt_full__DOT__scale_mode));
    bufp->fullIData(oldp+30,(vlSelf->intt_full__DOT__zeta_data),32);
    bufp->fullBit(oldp+31,(vlSelf->intt_full__DOT__internal_active));
    bufp->fullIData(oldp+32,((- vlSelf->intt_full__DOT__zeta_data)),32);
    bufp->fullCData(oldp+33,(vlSelf->intt_full__DOT__ctrl_inst__DOT__state),3);
    bufp->fullCData(oldp+34,(vlSelf->intt_full__DOT__ctrl_inst__DOT__len_exp),3);
    bufp->fullCData(oldp+35,(vlSelf->intt_full__DOT__ctrl_inst__DOT__start_idx),8);
    bufp->fullCData(oldp+36,(vlSelf->intt_full__DOT__ctrl_inst__DOT__j_idx),8);
    bufp->fullSData(oldp+37,(vlSelf->intt_full__DOT__ctrl_inst__DOT__k_idx),9);
    bufp->fullCData(oldp+38,(vlSelf->intt_full__DOT__ctrl_inst__DOT__scale_idx),8);
    bufp->fullCData(oldp+39,((0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->intt_full__DOT__ctrl_inst__DOT__len_exp)))),8);
    bufp->fullBit(oldp+40,(vlSelf->clk));
    bufp->fullBit(oldp+41,(vlSelf->rst));
    bufp->fullBit(oldp+42,(vlSelf->start));
    bufp->fullBit(oldp+43,(vlSelf->done));
    bufp->fullCData(oldp+44,(vlSelf->ext_addr),8);
    bufp->fullIData(oldp+45,(vlSelf->ext_data_out),32);
    bufp->fullIData(oldp+46,(vlSelf->ext_data_in),32);
    bufp->fullBit(oldp+47,(vlSelf->ext_we));
    bufp->fullCData(oldp+48,(vlSelf->state_out),3);
    bufp->fullCData(oldp+49,(vlSelf->len_exp_out),3);
    bufp->fullCData(oldp+50,(vlSelf->start_idx_out),8);
    bufp->fullCData(oldp+51,(vlSelf->j_idx_out),8);
    bufp->fullSData(oldp+52,(vlSelf->k_out),9);
    bufp->fullCData(oldp+53,(vlSelf->write_addr_out),8);
    bufp->fullBit(oldp+54,(vlSelf->write_en_out));
    bufp->fullBit(oldp+55,(vlSelf->write_b_en_out));
    bufp->fullCData(oldp+56,(vlSelf->j_reg_out),8);
    bufp->fullCData(oldp+57,(vlSelf->j_plus_len_reg_out),8);
    bufp->fullBit(oldp+58,(vlSelf->bfu_valid_out));
    bufp->fullCData(oldp+59,(vlSelf->j_comb_out),8);
    bufp->fullCData(oldp+60,(vlSelf->j_plus_len_comb_out),8);
    bufp->fullIData(oldp+61,(vlSelf->intt_full__DOT__ram_inst__DOT__mem
                             [vlSelf->intt_full__DOT__ram_addr_a]),32);
    bufp->fullIData(oldp+62,(vlSelf->intt_full__DOT__ram_inst__DOT__mem
                             [vlSelf->intt_full__DOT__ram_addr_b]),32);
    bufp->fullIData(oldp+63,(((IData)(vlSelf->intt_full__DOT__scale_mode)
                               ? 0U : (IData)(((vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly 
                                                - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                              VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly))))) 
                                               >> 0x20U)))),32);
    bufp->fullCData(oldp+64,(vlSelf->intt_full__DOT__ram_addr_a),8);
    bufp->fullCData(oldp+65,(vlSelf->intt_full__DOT__ram_addr_b),8);
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ext_we) 
                            | (IData)(vlSelf->intt_full__DOT____VdfgRegularize_h8765f855_0_0))));
    bufp->fullIData(oldp+67,(((IData)(vlSelf->ext_we)
                               ? vlSelf->ext_data_in
                               : ((IData)(vlSelf->intt_full__DOT__write_b_en)
                                   ? vlSelf->intt_full__DOT__bfu_b_out_reg
                                   : ((IData)(vlSelf->intt_full__DOT__scale_mode)
                                       ? vlSelf->intt_full__DOT__bfu_a_out
                                       : vlSelf->intt_full__DOT__bfu_a_out_reg)))),32);
    bufp->fullIData(oldp+68,((vlSelf->intt_full__DOT__ram_inst__DOT__mem
                              [vlSelf->intt_full__DOT__ram_addr_a] 
                              - vlSelf->intt_full__DOT__ram_inst__DOT__mem
                              [vlSelf->intt_full__DOT__ram_addr_b])),32);
    bufp->fullBit(oldp+69,(((~ (IData)(vlSelf->ext_we)) 
                            & (IData)(vlSelf->start))));
}
