// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeccak_f1600.h for the primary calling header

#include "Vkeccak_f1600__pch.h"
#include "Vkeccak_f1600___024root.h"

VL_ATTR_COLD void Vkeccak_f1600___024root___eval_triggers__stl(Vkeccak_f1600___024root* vlSelf);
VL_ATTR_COLD void Vkeccak_f1600___024root___eval_stl(Vkeccak_f1600___024root* vlSelf);

VL_ATTR_COLD bool Vkeccak_f1600___024root___eval_phase__stl(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vkeccak_f1600___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vkeccak_f1600___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeccak_f1600___024root___dump_triggers__act(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeccak_f1600___024root___dump_triggers__nba(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vkeccak_f1600___024root___ctor_var_reset(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1600, vlSelf->state_in);
    VL_RAND_RESET_W(1600, vlSelf->state_out);
    vlSelf->keccak_f1600__DOT__fsm_state = VL_RAND_RESET_I(2);
    vlSelf->keccak_f1600__DOT__round_cnt = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(1600, vlSelf->keccak_f1600__DOT__reg_state);
    VL_RAND_RESET_W(1600, vlSelf->keccak_f1600__DOT__round_out_s);
    vlSelf->keccak_f1600__DOT__round_constant = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1600, vlSelf->keccak_f1600__DOT__round_inst__DOT__rho_in);
    VL_RAND_RESET_W(1600, vlSelf->keccak_f1600__DOT__round_inst__DOT__rho_out);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h13e54a11__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0a7b4062__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h05a673e3__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0f741e5c__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0e6ee135__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h407a6c1e__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h40d9f987__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h7a009c58__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h7aef4b79__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h15c0f99a__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0cbbd3db__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h76adb6e4__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h76dfe95d__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_hc671e336__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_hc774b09f__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_he34943e0__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_he2c21ae1__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_he43152f2__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h158e6eb3__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h1dc983cc__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h1c9cd6a5__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_hdeb681ce__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0a1581f7__0 = VL_RAND_RESET_I(1);
    vlSelf->keccak_f1600__DOT__round_inst__DOT____Vlvbound_h10650ee8__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ABS__0__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__0__numberIn = 0;
    vlSelf->__Vfunc_ABS__1__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__1__numberIn = 0;
    vlSelf->__Vfunc_ABS__2__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__2__numberIn = 0;
    vlSelf->__Vfunc_ABS__3__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__3__numberIn = 0;
    vlSelf->__Vfunc_ABS__4__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__4__numberIn = 0;
    vlSelf->__Vfunc_ABS__5__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__5__numberIn = 0;
    vlSelf->__Vfunc_ABS__6__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__6__numberIn = 0;
    vlSelf->__Vfunc_ABS__7__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__7__numberIn = 0;
    vlSelf->__Vfunc_ABS__8__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__8__numberIn = 0;
    vlSelf->__Vfunc_ABS__9__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__9__numberIn = 0;
    vlSelf->__Vfunc_ABS__10__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__10__numberIn = 0;
    vlSelf->__Vfunc_ABS__11__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__11__numberIn = 0;
    vlSelf->__Vfunc_ABS__12__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__12__numberIn = 0;
    vlSelf->__Vfunc_ABS__13__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__13__numberIn = 0;
    vlSelf->__Vfunc_ABS__14__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__14__numberIn = 0;
    vlSelf->__Vfunc_ABS__15__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__15__numberIn = 0;
    vlSelf->__Vfunc_ABS__16__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__16__numberIn = 0;
    vlSelf->__Vfunc_ABS__17__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__17__numberIn = 0;
    vlSelf->__Vfunc_ABS__18__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__18__numberIn = 0;
    vlSelf->__Vfunc_ABS__19__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__19__numberIn = 0;
    vlSelf->__Vfunc_ABS__20__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__20__numberIn = 0;
    vlSelf->__Vfunc_ABS__21__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__21__numberIn = 0;
    vlSelf->__Vfunc_ABS__22__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__22__numberIn = 0;
    vlSelf->__Vfunc_ABS__23__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__23__numberIn = 0;
    vlSelf->__Vfunc_ABS__24__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__24__numberIn = 0;
    vlSelf->__Vfunc_ABS__25__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__25__numberIn = 0;
    vlSelf->__Vfunc_ABS__26__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__26__numberIn = 0;
    vlSelf->__Vfunc_ABS__27__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__27__numberIn = 0;
    vlSelf->__Vfunc_ABS__28__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__28__numberIn = 0;
    vlSelf->__Vfunc_ABS__29__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__29__numberIn = 0;
    vlSelf->__Vfunc_ABS__30__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__30__numberIn = 0;
    vlSelf->__Vfunc_ABS__31__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__31__numberIn = 0;
    vlSelf->__Vfunc_ABS__32__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__32__numberIn = 0;
    vlSelf->__Vfunc_ABS__33__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__33__numberIn = 0;
    vlSelf->__Vfunc_ABS__34__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__34__numberIn = 0;
    vlSelf->__Vfunc_ABS__35__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__35__numberIn = 0;
    vlSelf->__Vfunc_ABS__36__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__36__numberIn = 0;
    vlSelf->__Vfunc_ABS__37__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__37__numberIn = 0;
    vlSelf->__Vfunc_ABS__38__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__38__numberIn = 0;
    vlSelf->__Vfunc_ABS__39__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__39__numberIn = 0;
    vlSelf->__Vfunc_ABS__40__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__40__numberIn = 0;
    vlSelf->__Vfunc_ABS__41__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__41__numberIn = 0;
    vlSelf->__Vfunc_ABS__42__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__42__numberIn = 0;
    vlSelf->__Vfunc_ABS__43__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__43__numberIn = 0;
    vlSelf->__Vfunc_ABS__44__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__44__numberIn = 0;
    vlSelf->__Vfunc_ABS__45__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__45__numberIn = 0;
    vlSelf->__Vfunc_ABS__46__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__46__numberIn = 0;
    vlSelf->__Vfunc_ABS__47__Vfuncout = 0;
    vlSelf->__Vfunc_ABS__47__numberIn = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
