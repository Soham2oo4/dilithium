// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt_full.h for the primary calling header

#include "Vntt_full__pch.h"
#include "Vntt_full___024root.h"

VL_ATTR_COLD void Vntt_full___024root___eval_static(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vntt_full___024root___eval_initial__TOP(Vntt_full___024root* vlSelf);

VL_ATTR_COLD void Vntt_full___024root___eval_initial(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_initial\n"); );
    // Body
    Vntt_full___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vntt_full___024root___eval_initial__TOP(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ ntt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i;
    ntt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i = 0;
    // Body
    ntt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, ntt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i)) {
        vlSelf->ntt_full__DOT__ram_inst__DOT__mem[(0xffU 
                                                   & ntt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i)] = 0U;
        ntt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + ntt_full__DOT__ram_inst__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vntt_full___024root___eval_final(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__stl(Vntt_full___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vntt_full___024root___eval_phase__stl(Vntt_full___024root* vlSelf);

VL_ATTR_COLD void Vntt_full___024root___eval_settle(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vntt_full___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../hw/ntt_full.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vntt_full___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__stl(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vntt_full___024root___stl_sequent__TOP__0(Vntt_full___024root* vlSelf);

VL_ATTR_COLD void Vntt_full___024root___eval_stl(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vntt_full___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vntt_full___024root___stl_sequent__TOP__0(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___stl_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ ntt_full__DOT__bfu_inst__DOT__mul;
    ntt_full__DOT__bfu_inst__DOT__mul = 0;
    IData/*31:0*/ __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout;
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx;
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx = 0;
    // Body
    vlSelf->write_en_out = vlSelf->ntt_full__DOT__write_en;
    vlSelf->write_b_en_out = vlSelf->ntt_full__DOT__write_b_en;
    vlSelf->j_comb_out = vlSelf->ntt_full__DOT__j;
    vlSelf->j_plus_len_comb_out = vlSelf->ntt_full__DOT__j_plus_len;
    vlSelf->j_reg_out = vlSelf->ntt_full__DOT__j_reg_debug;
    vlSelf->j_plus_len_reg_out = vlSelf->ntt_full__DOT__j_plus_len_reg_debug;
    vlSelf->bfu_valid_out = vlSelf->ntt_full__DOT__bfu_valid;
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val 
        = (0xffU & (0x80U >> (IData)(vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp)));
    if (vlSelf->ext_we) {
        vlSelf->write_addr_out = vlSelf->ext_addr;
        vlSelf->ntt_full__DOT__ram_addr_a = vlSelf->ext_addr;
        vlSelf->ntt_full__DOT__ram_addr_b = 0U;
    } else {
        vlSelf->write_addr_out = ((IData)(vlSelf->ntt_full__DOT__write_b_en)
                                   ? (IData)(vlSelf->ntt_full__DOT__j_plus_len)
                                   : (IData)(vlSelf->ntt_full__DOT__j));
        vlSelf->ntt_full__DOT__ram_addr_a = vlSelf->ntt_full__DOT__j;
        vlSelf->ntt_full__DOT__ram_addr_b = vlSelf->ntt_full__DOT__j_plus_len;
    }
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx 
        = vlSelf->ntt_full__DOT__k;
    __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout 
        = ((0x100U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
            ? 0x1e29ceU : ((0x80U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                            ? ((0x40U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                ? ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1e29ceU
                                                     : 0xfff316b6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x155e68U
                                                     : 0x3c15caU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeb36dfU
                                                     : 0xffff434eU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3bcf2cU
                                                     : 0xfff78a50U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9e5a9U
                                                     : 0x189c2aU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff11805U
                                                     : 0x2cc93U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdd1d09U
                                                     : 0xfff993ddU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdde1afU
                                                     : 0xffd32764U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc57fdbU
                                                     : 0xfffc05daU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffef2633U
                                                     : 0xffe68e98U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1d2668U
                                                     : 0xffe47caeU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1a4cd0U
                                                     : 0xfff97d45U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x7340eU
                                                     : 0x1a35e7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff11bf4U
                                                     : 0x21c4f7U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x41dc0U
                                                     : 0x3b0115U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x35c539U
                                                     : 0xffd1a13cU)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe48c3dU
                                                     : 0xffc7a167U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x19379aU
                                                     : 0xc5ca5U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x2dfd71U
                                                     : 0x18aa08U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x27c1cU
                                                     : 0xffcf6cbeU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffed93a7U
                                                     : 0x2d4bbU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x336898U
                                                     : 0x1ddd98U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffd7c8fU
                                                     : 0x2573b7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x251d8bU
                                                     : 0xffe14658U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc65e1fU
                                                     : 0x910d8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc72c12U
                                                     : 0xffd8911bU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe3d157U
                                                     : 0xffe67ff8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd4ca0cU
                                                     : 0xfff7b934U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x33f8cfU
                                                     : 0x221de8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xbdbe7U
                                                     : 0x16e405U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeb05adU
                                                     : 0xffd92578U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1d4099U
                                                     : 0xffec7953U))))))
                                : ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe20d6eU
                                                     : 0x327283U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1406c7U
                                                     : 0xfff91de4U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffea2d2fU
                                                     : 0xffcd5e3eU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x12e11bU
                                                     : 0xffeba8beU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeff6a6U
                                                     : 0x1d0b4bU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1c853fU
                                                     : 0xffd25089U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9db90U
                                                     : 0x283891U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1314beU
                                                     : 0xffc68518U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x185a46U
                                                     : 0x25f051U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x130984U
                                                     : 0x3de11cU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x134d71U
                                                     : 0xffd87a3aU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x291199U
                                                     : 0x2b5ee5U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x31924U
                                                     : 0x1a7cc7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcd003bU
                                                     : 0x3472e7U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3eb01bU
                                                     : 0xffdacd41U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x4610cU
                                                     : 0x53919U)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc921c2U
                                                     : 0xfff44592U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff7fcd6U
                                                     : 0xffc9b97dU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x30ef86U
                                                     : 0x1f0084U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd05af6U
                                                     : 0xfff60021U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff806fcU
                                                     : 0xffff5704U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe7628aU
                                                     : 0x78f83U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xc7f5aU
                                                     : 0xde0e6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1c5e1aU
                                                     : 0xdbe5eU))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcf45deU
                                                     : 0xffedbb56U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc6a2fcU
                                                     : 0xffca48a0U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x359b5dU
                                                     : 0xffed24f0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x252587U
                                                     : 0x412f5U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9a422U
                                                     : 0xffdaab9fU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x223dfbU
                                                     : 0xffccff72U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3a41f8U
                                                     : 0x2358d4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x33ff5aU
                                                     : 0x1fea93U)))))))
                            : ((0x40U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                ? ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3a97d9U
                                                     : 0xffc8a057U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc4c79cU
                                                     : 0xffd1eea2U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffea0802U
                                                     : 0xfff39944U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe7d0e0U
                                                     : 0x139e25U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x147792U
                                                     : 0x141305U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffd4ae0U
                                                     : 0xffdb3c93U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe3bff6U
                                                     : 0x3036c2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9c808U
                                                     : 0x2e46cU))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffebe808U
                                                     : 0xb98a1U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffcc7dfU
                                                     : 0x24756cU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffce69c0U
                                                     : 0x193948U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffffde7eU
                                                     : 0xffc72bcaU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3c675aU
                                                     : 0xdcd44U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffef36beU
                                                     : 0xad00U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x2f4588U
                                                     : 0x7c417U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x40af0U
                                                     : 0xffccfbe9U)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffea2c62U
                                                     : 0x1c4563U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1495d4U
                                                     : 0xfffa2bddU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffec09f7U
                                                     : 0xffffa63bU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffed4113U
                                                     : 0xfff5c282U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffda3409U
                                                     : 0xfff9ba6dU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc7a44bU
                                                     : 0xffd2b7a3U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x296e9fU
                                                     : 0x20c638U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff0fe85U
                                                     : 0x3410f2U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1efcaU
                                                     : 0xffc890e0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcfd2aeU
                                                     : 0xffcf5280U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff0bcf6U
                                                     : 0xffc1b072U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x1d9772U
                                                     : 0xffeccf75U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe7cfbbU
                                                     : 0x2135c7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3509eeU
                                                     : 0xffe9d65dU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd19819U
                                                     : 0xffc7e1cfU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe8ac81U
                                                     : 0xffc406e5U))))))
                                : ((0x20U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                    ? ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd54f2dU
                                                     : 0x1f9d54U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd8fc30U
                                                     : 0x3b8534U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3b3853U
                                                     : 0xe8f76U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x81b9aU
                                                     : 0xc63a8U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x38738cU
                                                     : 0xffe7945cU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdf5617U
                                                     : 0x35843fU))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc5af59U
                                                     : 0x357e1eU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe6ead6U
                                                     : 0xffe6123dU))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff7c55dU
                                                     : 0x23d69cU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfffb6a4dU
                                                     : 0x360400U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd43e41U
                                                     : 0x368a96U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd18e7cU
                                                     : 0xffc51585U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x3bbeafU
                                                     : 0xffd947d4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc9302cU
                                                     : 0xffe6a503U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x35dec5U
                                                     : 0x2ef4cdU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x17620U
                                                     : 0x294a67U)))))
                                    : ((0x10U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                        ? ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x445c5U
                                                     : 0x3d3201U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffffb422U
                                                     : 0x1ad035U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffcdfc98U
                                                     : 0xffeaa4f7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffc51ae7U
                                                     : 0xffdfadd6U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffdfd37bU
                                                     : 0x27f968U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffeeeaa0U
                                                     : 0xfff79d90U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x36b788U
                                                     : 0xffef85a4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfa070U
                                                     : 0x299658U))))
                                        : ((8U & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                            ? ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x28e527U
                                                     : 0x2f7a49U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffd3fb09U
                                                     : 0x2f9a75U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xffe0147fU
                                                     : 0xfffa84adU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x23e92bU
                                                     : 0x1bde2bU)))
                                            : ((4U 
                                                & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x71e24U
                                                     : 0xfff2a128U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff42118U
                                                     : 0x39e44U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0xfff81503U
                                                     : 0xffd83102U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__idx))
                                                     ? 0x64f7U
                                                     : 0U)))))))));
    vlSelf->ntt_full__DOT__zeta_data = __Vfunc_ntt_full__DOT__zeta_rom_inst__DOT__get_zeta__0__Vfuncout;
    vlSelf->ext_data_out = vlSelf->ntt_full__DOT__ram_inst__DOT__mem
        [vlSelf->ntt_full__DOT__ram_addr_a];
    ntt_full__DOT__bfu_inst__DOT__mul = VL_MULS_QQQ(64, 
                                                    VL_EXTENDS_QI(64,32, vlSelf->ntt_full__DOT__zeta_data), 
                                                    VL_EXTENDS_QI(64,32, 
                                                                  vlSelf->ntt_full__DOT__ram_inst__DOT__mem
                                                                  [vlSelf->ntt_full__DOT__ram_addr_b]));
    vlSelf->ntt_full__DOT__bfu_inst__DOT__t = (IData)(
                                                      ((ntt_full__DOT__bfu_inst__DOT__mul 
                                                        - 
                                                        VL_MULS_QQQ(64, 0x7fe001ULL, 
                                                                    VL_EXTENDS_QI(64,32, (IData)(
                                                                                VL_MULS_QQQ(64, 0x3802001ULL, ntt_full__DOT__bfu_inst__DOT__mul))))) 
                                                       >> 0x20U));
}

VL_ATTR_COLD void Vntt_full___024root___eval_triggers__stl(Vntt_full___024root* vlSelf);

VL_ATTR_COLD bool Vntt_full___024root___eval_phase__stl(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vntt_full___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vntt_full___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__ico(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__act(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_full___024root___dump_triggers__nba(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vntt_full___024root___ctor_var_reset(Vntt_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_full___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->ext_addr = VL_RAND_RESET_I(8);
    vlSelf->ext_data_out = VL_RAND_RESET_I(32);
    vlSelf->ext_data_in = VL_RAND_RESET_I(32);
    vlSelf->ext_we = VL_RAND_RESET_I(1);
    vlSelf->state_out = VL_RAND_RESET_I(3);
    vlSelf->len_exp_out = VL_RAND_RESET_I(3);
    vlSelf->start_idx_out = VL_RAND_RESET_I(8);
    vlSelf->j_idx_out = VL_RAND_RESET_I(8);
    vlSelf->k_out = VL_RAND_RESET_I(9);
    vlSelf->write_addr_out = VL_RAND_RESET_I(8);
    vlSelf->write_en_out = VL_RAND_RESET_I(1);
    vlSelf->write_b_en_out = VL_RAND_RESET_I(1);
    vlSelf->j_reg_out = VL_RAND_RESET_I(8);
    vlSelf->j_plus_len_reg_out = VL_RAND_RESET_I(8);
    vlSelf->bfu_valid_out = VL_RAND_RESET_I(1);
    vlSelf->j_comb_out = VL_RAND_RESET_I(8);
    vlSelf->j_plus_len_comb_out = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__k = VL_RAND_RESET_I(9);
    vlSelf->ntt_full__DOT__j = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__j_plus_len = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__bfu_valid = VL_RAND_RESET_I(1);
    vlSelf->ntt_full__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ntt_full__DOT__write_b_en = VL_RAND_RESET_I(1);
    vlSelf->ntt_full__DOT__zeta_data = VL_RAND_RESET_I(32);
    vlSelf->ntt_full__DOT__bfu_a_out_reg = VL_RAND_RESET_I(32);
    vlSelf->ntt_full__DOT__bfu_b_out_reg = VL_RAND_RESET_I(32);
    vlSelf->ntt_full__DOT__ram_addr_a = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__ram_addr_b = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__j_reg_debug = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__j_plus_len_reg_debug = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ntt_full__DOT__ram_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ntt_full__DOT__bfu_inst__DOT__t = VL_RAND_RESET_I(32);
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_exp = VL_RAND_RESET_I(3);
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__start_idx = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__j_idx = VL_RAND_RESET_I(8);
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__k_idx = VL_RAND_RESET_I(9);
    vlSelf->ntt_full__DOT__ctrl_inst__DOT__len_val = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__len_exp = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__start_idx = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__j_idx = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ntt_full__DOT__ctrl_inst__DOT__k_idx = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
