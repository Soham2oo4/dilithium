// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeccak_f1600.h for the primary calling header

#include "Vkeccak_f1600__pch.h"
#include "Vkeccak_f1600___024root.h"

void Vkeccak_f1600___024root___eval_triggers__act(Vkeccak_f1600___024root* vlSelf);
void Vkeccak_f1600___024root___eval_act(Vkeccak_f1600___024root* vlSelf);

bool Vkeccak_f1600___024root___eval_phase__act(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vkeccak_f1600___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vkeccak_f1600___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vkeccak_f1600___024root___eval_nba(Vkeccak_f1600___024root* vlSelf);

bool Vkeccak_f1600___024root___eval_phase__nba(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vkeccak_f1600___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeccak_f1600___024root___dump_triggers__nba(Vkeccak_f1600___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeccak_f1600___024root___dump_triggers__act(Vkeccak_f1600___024root* vlSelf);
#endif  // VL_DEBUG

void Vkeccak_f1600___024root___eval(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vkeccak_f1600___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../hw/hash/keccak_f1600.sv", 46, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vkeccak_f1600___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../hw/hash/keccak_f1600.sv", 46, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vkeccak_f1600___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vkeccak_f1600___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vkeccak_f1600___024root___eval_debug_assertions(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
