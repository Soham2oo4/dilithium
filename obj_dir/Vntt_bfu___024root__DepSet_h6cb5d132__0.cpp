// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt_bfu.h for the primary calling header

#include "Vntt_bfu__pch.h"
#include "Vntt_bfu___024root.h"

VlCoroutine Vntt_bfu___024root___eval_initial__TOP__Vtiming__0(Vntt_bfu___024root* vlSelf);

void Vntt_bfu___024root___eval_initial(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_initial\n"); );
    // Body
    Vntt_bfu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vntt_bfu___024root___eval_initial__TOP__Vtiming__0(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_ntt_bfu__DOT__a = 0xaU;
    vlSelf->tb_ntt_bfu__DOT__b = 0x14U;
    vlSelf->tb_ntt_bfu__DOT__zeta = 0x1e240U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/soham/dil_le_gaya_sanam/hw_implementation/hw/tb_ntt_bfu.v", 
                                       24);
    VL_WRITEF_NX("Inputs: a=%11d b=%11d zeta=%11d\nOutputs: a_out=%11d b_out=%11d\n",0,
                 32,vlSelf->tb_ntt_bfu__DOT__a,32,vlSelf->tb_ntt_bfu__DOT__b,
                 32,vlSelf->tb_ntt_bfu__DOT__zeta,32,
                 vlSelf->tb_ntt_bfu__DOT__a_out,32,
                 vlSelf->tb_ntt_bfu__DOT__b_out);
    vlSelf->tb_ntt_bfu__DOT__a = 0x3e8U;
    vlSelf->tb_ntt_bfu__DOT__b = 0x7d0U;
    vlSelf->tb_ntt_bfu__DOT__zeta = 0x3039U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/soham/dil_le_gaya_sanam/hw_implementation/hw/tb_ntt_bfu.v", 
                                       34);
    VL_WRITEF_NX("Inputs: a=%11d b=%11d zeta=%11d\nOutputs: a_out=%11d b_out=%11d\n",0,
                 32,vlSelf->tb_ntt_bfu__DOT__a,32,vlSelf->tb_ntt_bfu__DOT__b,
                 32,vlSelf->tb_ntt_bfu__DOT__zeta,32,
                 vlSelf->tb_ntt_bfu__DOT__a_out,32,
                 vlSelf->tb_ntt_bfu__DOT__b_out);
    VL_FINISH_MT("/home/soham/dil_le_gaya_sanam/hw_implementation/hw/tb_ntt_bfu.v", 38, "");
}

void Vntt_bfu___024root___act_sequent__TOP__0(Vntt_bfu___024root* vlSelf);

void Vntt_bfu___024root___eval_act(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vntt_bfu___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vntt_bfu___024root___act_sequent__TOP__0(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_ntt_bfu__DOT__dut__DOT__t;
    tb_ntt_bfu__DOT__dut__DOT__t = 0;
    // Body
    tb_ntt_bfu__DOT__dut__DOT__t = (IData)(VL_MODDIVS_QQQ(64, 
                                                          VL_MULS_QQQ(64, 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->tb_ntt_bfu__DOT__zeta), 
                                                                      VL_EXTENDS_QI(64,32, vlSelf->tb_ntt_bfu__DOT__b)), 0x7fe001ULL));
    vlSelf->tb_ntt_bfu__DOT__a_out = (vlSelf->tb_ntt_bfu__DOT__a 
                                      + tb_ntt_bfu__DOT__dut__DOT__t);
    vlSelf->tb_ntt_bfu__DOT__b_out = (vlSelf->tb_ntt_bfu__DOT__a 
                                      - tb_ntt_bfu__DOT__dut__DOT__t);
}

void Vntt_bfu___024root___eval_nba(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vntt_bfu___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vntt_bfu___024root___timing_resume(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vntt_bfu___024root___eval_triggers__act(Vntt_bfu___024root* vlSelf);

bool Vntt_bfu___024root___eval_phase__act(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vntt_bfu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vntt_bfu___024root___timing_resume(vlSelf);
        Vntt_bfu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vntt_bfu___024root___eval_phase__nba(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vntt_bfu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_bfu___024root___dump_triggers__nba(Vntt_bfu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt_bfu___024root___dump_triggers__act(Vntt_bfu___024root* vlSelf);
#endif  // VL_DEBUG

void Vntt_bfu___024root___eval(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vntt_bfu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/soham/dil_le_gaya_sanam/hw_implementation/hw/tb_ntt_bfu.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vntt_bfu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/soham/dil_le_gaya_sanam/hw_implementation/hw/tb_ntt_bfu.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vntt_bfu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vntt_bfu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vntt_bfu___024root___eval_debug_assertions(Vntt_bfu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vntt_bfu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt_bfu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
