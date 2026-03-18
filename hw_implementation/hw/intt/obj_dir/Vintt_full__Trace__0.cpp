// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintt_full__Syms.h"


void Vintt_full___024root__trace_chg_0_sub_0(Vintt_full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vintt_full___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_chg_0\n"); );
    // Init
    Vintt_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintt_full___024root*>(voidSelf);
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vintt_full___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vintt_full___024root__trace_chg_0_sub_0(Vintt_full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->intt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+1,(vlSelf->intt_full__DOT__bfu_a_out),32);
        bufp->chgQData(oldp+2,(vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly),64);
        bufp->chgQData(oldp+4,(VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly)),64);
        bufp->chgIData(oldp+6,((IData)(VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly))),32);
        bufp->chgQData(oldp+7,((vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly 
                                - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                              VL_EXTENDS_QI(64,32, (IData)(
                                                                           VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly)))))),64);
        bufp->chgIData(oldp+9,((IData)(((vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly 
                                         - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                       VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly))))) 
                                        >> 0x20U))),32);
        bufp->chgQData(oldp+10,(VL_MULS_QQQ(64, 0xa3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0)),64);
        bufp->chgQData(oldp+12,(VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0)),64);
        bufp->chgIData(oldp+14,((IData)(VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0))),32);
        bufp->chgQData(oldp+15,((VL_MULS_QQQ(64, 0xa3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0) 
                                 - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                               VL_EXTENDS_QI(64,32, (IData)(
                                                                            VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0)))))),64);
        bufp->chgIData(oldp+17,((IData)(((VL_MULS_QQQ(64, 0xa3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0) 
                                          - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                        VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x23dff7fe3faULL, vlSelf->intt_full__DOT__bfu_inst__DOT____VdfgRegularize_h58a10421_0_0))))) 
                                         >> 0x20U))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+18,(vlSelf->intt_full__DOT__bfu_a_out_reg),32);
        bufp->chgIData(oldp+19,(vlSelf->intt_full__DOT__bfu_b_out_reg),32);
        bufp->chgCData(oldp+20,(vlSelf->intt_full__DOT__j_reg_debug),8);
        bufp->chgCData(oldp+21,(vlSelf->intt_full__DOT__j_plus_len_reg_debug),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+22,(vlSelf->intt_full__DOT__k),9);
        bufp->chgCData(oldp+23,(vlSelf->intt_full__DOT__j),8);
        bufp->chgCData(oldp+24,(vlSelf->intt_full__DOT__j_plus_len),8);
        bufp->chgBit(oldp+25,(vlSelf->intt_full__DOT__bfu_valid));
        bufp->chgBit(oldp+26,(vlSelf->intt_full__DOT__write_en));
        bufp->chgBit(oldp+27,(vlSelf->intt_full__DOT__write_b_en));
        bufp->chgBit(oldp+28,(vlSelf->intt_full__DOT__scale_mode));
        bufp->chgIData(oldp+29,(vlSelf->intt_full__DOT__zeta_data),32);
        bufp->chgBit(oldp+30,(vlSelf->intt_full__DOT__internal_active));
        bufp->chgIData(oldp+31,((- vlSelf->intt_full__DOT__zeta_data)),32);
        bufp->chgCData(oldp+32,(vlSelf->intt_full__DOT__ctrl_inst__DOT__state),3);
        bufp->chgCData(oldp+33,(vlSelf->intt_full__DOT__ctrl_inst__DOT__len_exp),3);
        bufp->chgCData(oldp+34,(vlSelf->intt_full__DOT__ctrl_inst__DOT__start_idx),8);
        bufp->chgCData(oldp+35,(vlSelf->intt_full__DOT__ctrl_inst__DOT__j_idx),8);
        bufp->chgSData(oldp+36,(vlSelf->intt_full__DOT__ctrl_inst__DOT__k_idx),9);
        bufp->chgCData(oldp+37,(vlSelf->intt_full__DOT__ctrl_inst__DOT__scale_idx),8);
        bufp->chgCData(oldp+38,((0xffU & ((IData)(1U) 
                                          << (IData)(vlSelf->intt_full__DOT__ctrl_inst__DOT__len_exp)))),8);
    }
    bufp->chgBit(oldp+39,(vlSelf->clk));
    bufp->chgBit(oldp+40,(vlSelf->rst));
    bufp->chgBit(oldp+41,(vlSelf->start));
    bufp->chgBit(oldp+42,(vlSelf->done));
    bufp->chgCData(oldp+43,(vlSelf->ext_addr),8);
    bufp->chgIData(oldp+44,(vlSelf->ext_data_out),32);
    bufp->chgIData(oldp+45,(vlSelf->ext_data_in),32);
    bufp->chgBit(oldp+46,(vlSelf->ext_we));
    bufp->chgCData(oldp+47,(vlSelf->state_out),3);
    bufp->chgCData(oldp+48,(vlSelf->len_exp_out),3);
    bufp->chgCData(oldp+49,(vlSelf->start_idx_out),8);
    bufp->chgCData(oldp+50,(vlSelf->j_idx_out),8);
    bufp->chgSData(oldp+51,(vlSelf->k_out),9);
    bufp->chgCData(oldp+52,(vlSelf->write_addr_out),8);
    bufp->chgBit(oldp+53,(vlSelf->write_en_out));
    bufp->chgBit(oldp+54,(vlSelf->write_b_en_out));
    bufp->chgCData(oldp+55,(vlSelf->j_reg_out),8);
    bufp->chgCData(oldp+56,(vlSelf->j_plus_len_reg_out),8);
    bufp->chgBit(oldp+57,(vlSelf->bfu_valid_out));
    bufp->chgCData(oldp+58,(vlSelf->j_comb_out),8);
    bufp->chgCData(oldp+59,(vlSelf->j_plus_len_comb_out),8);
    bufp->chgIData(oldp+60,(vlSelf->intt_full__DOT__ram_inst__DOT__mem
                            [vlSelf->intt_full__DOT__ram_addr_a]),32);
    bufp->chgIData(oldp+61,(vlSelf->intt_full__DOT__ram_inst__DOT__mem
                            [vlSelf->intt_full__DOT__ram_addr_b]),32);
    bufp->chgIData(oldp+62,(((IData)(vlSelf->intt_full__DOT__scale_mode)
                              ? 0U : (IData)(((vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly 
                                               - VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                             VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x3802001ULL, vlSelf->intt_full__DOT__bfu_inst__DOT__mul_bfly))))) 
                                              >> 0x20U)))),32);
    bufp->chgCData(oldp+63,(vlSelf->intt_full__DOT__ram_addr_a),8);
    bufp->chgCData(oldp+64,(vlSelf->intt_full__DOT__ram_addr_b),8);
    bufp->chgBit(oldp+65,(((IData)(vlSelf->ext_we) 
                           | (IData)(vlSelf->intt_full__DOT____VdfgRegularize_h8765f855_0_0))));
    bufp->chgIData(oldp+66,(((IData)(vlSelf->ext_we)
                              ? vlSelf->ext_data_in
                              : ((IData)(vlSelf->intt_full__DOT__write_b_en)
                                  ? vlSelf->intt_full__DOT__bfu_b_out_reg
                                  : ((IData)(vlSelf->intt_full__DOT__scale_mode)
                                      ? vlSelf->intt_full__DOT__bfu_a_out
                                      : vlSelf->intt_full__DOT__bfu_a_out_reg)))),32);
    bufp->chgIData(oldp+67,((vlSelf->intt_full__DOT__ram_inst__DOT__mem
                             [vlSelf->intt_full__DOT__ram_addr_a] 
                             - vlSelf->intt_full__DOT__ram_inst__DOT__mem
                             [vlSelf->intt_full__DOT__ram_addr_b])),32);
    bufp->chgBit(oldp+68,(((~ (IData)(vlSelf->ext_we)) 
                           & (IData)(vlSelf->start))));
}

void Vintt_full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintt_full___024root__trace_cleanup\n"); );
    // Init
    Vintt_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintt_full___024root*>(voidSelf);
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
