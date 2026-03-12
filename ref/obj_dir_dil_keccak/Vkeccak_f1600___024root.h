// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeccak_f1600.h for the primary calling header

#ifndef VERILATED_VKECCAK_F1600___024ROOT_H_
#define VERILATED_VKECCAK_F1600___024ROOT_H_  // guard

#include "verilated.h"


class Vkeccak_f1600__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vkeccak_f1600___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(start,0,0);
        VL_OUT8(done,0,0);
        CData/*1:0*/ keccak_f1600__DOT__fsm_state;
        CData/*4:0*/ keccak_f1600__DOT__round_cnt;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h13e54a11__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0a7b4062__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h05a673e3__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0f741e5c__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0e6ee135__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h407a6c1e__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h40d9f987__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h7a009c58__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h7aef4b79__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h15c0f99a__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0cbbd3db__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h76adb6e4__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h76dfe95d__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_hc671e336__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_hc774b09f__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_he34943e0__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_he2c21ae1__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_he43152f2__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h158e6eb3__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h1dc983cc__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h1c9cd6a5__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_hdeb681ce__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h0a1581f7__0;
        CData/*0:0*/ keccak_f1600__DOT__round_inst__DOT____Vlvbound_h10650ee8__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_INW(state_in,1599,0,50);
        VL_OUTW(state_out,1599,0,50);
        IData/*31:0*/ __Vfunc_ABS__0__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__0__numberIn;
        IData/*31:0*/ __Vfunc_ABS__1__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__1__numberIn;
        IData/*31:0*/ __Vfunc_ABS__2__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__2__numberIn;
        IData/*31:0*/ __Vfunc_ABS__3__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__3__numberIn;
        IData/*31:0*/ __Vfunc_ABS__4__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__4__numberIn;
        IData/*31:0*/ __Vfunc_ABS__5__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__5__numberIn;
        IData/*31:0*/ __Vfunc_ABS__6__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__6__numberIn;
        IData/*31:0*/ __Vfunc_ABS__7__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__7__numberIn;
        IData/*31:0*/ __Vfunc_ABS__8__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__8__numberIn;
        IData/*31:0*/ __Vfunc_ABS__9__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__9__numberIn;
        IData/*31:0*/ __Vfunc_ABS__10__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__10__numberIn;
        IData/*31:0*/ __Vfunc_ABS__11__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__11__numberIn;
        IData/*31:0*/ __Vfunc_ABS__12__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__12__numberIn;
        IData/*31:0*/ __Vfunc_ABS__13__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__13__numberIn;
    };
    struct {
        IData/*31:0*/ __Vfunc_ABS__14__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__14__numberIn;
        IData/*31:0*/ __Vfunc_ABS__15__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__15__numberIn;
        IData/*31:0*/ __Vfunc_ABS__16__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__16__numberIn;
        IData/*31:0*/ __Vfunc_ABS__17__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__17__numberIn;
        IData/*31:0*/ __Vfunc_ABS__18__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__18__numberIn;
        IData/*31:0*/ __Vfunc_ABS__19__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__19__numberIn;
        IData/*31:0*/ __Vfunc_ABS__20__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__20__numberIn;
        IData/*31:0*/ __Vfunc_ABS__21__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__21__numberIn;
        IData/*31:0*/ __Vfunc_ABS__22__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__22__numberIn;
        IData/*31:0*/ __Vfunc_ABS__23__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__23__numberIn;
        IData/*31:0*/ __Vfunc_ABS__24__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__24__numberIn;
        IData/*31:0*/ __Vfunc_ABS__25__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__25__numberIn;
        IData/*31:0*/ __Vfunc_ABS__26__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__26__numberIn;
        IData/*31:0*/ __Vfunc_ABS__27__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__27__numberIn;
        IData/*31:0*/ __Vfunc_ABS__28__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__28__numberIn;
        IData/*31:0*/ __Vfunc_ABS__29__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__29__numberIn;
        IData/*31:0*/ __Vfunc_ABS__30__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__30__numberIn;
        IData/*31:0*/ __Vfunc_ABS__31__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__31__numberIn;
        IData/*31:0*/ __Vfunc_ABS__32__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__32__numberIn;
        IData/*31:0*/ __Vfunc_ABS__33__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__33__numberIn;
        IData/*31:0*/ __Vfunc_ABS__34__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__34__numberIn;
        IData/*31:0*/ __Vfunc_ABS__35__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__35__numberIn;
        IData/*31:0*/ __Vfunc_ABS__36__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__36__numberIn;
        IData/*31:0*/ __Vfunc_ABS__37__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__37__numberIn;
        IData/*31:0*/ __Vfunc_ABS__38__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__38__numberIn;
        IData/*31:0*/ __Vfunc_ABS__39__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__39__numberIn;
        IData/*31:0*/ __Vfunc_ABS__40__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__40__numberIn;
        IData/*31:0*/ __Vfunc_ABS__41__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__41__numberIn;
        IData/*31:0*/ __Vfunc_ABS__42__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__42__numberIn;
        IData/*31:0*/ __Vfunc_ABS__43__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__43__numberIn;
        IData/*31:0*/ __Vfunc_ABS__44__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__44__numberIn;
        IData/*31:0*/ __Vfunc_ABS__45__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__45__numberIn;
    };
    struct {
        IData/*31:0*/ __Vfunc_ABS__46__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__46__numberIn;
        IData/*31:0*/ __Vfunc_ABS__47__Vfuncout;
        IData/*31:0*/ __Vfunc_ABS__47__numberIn;
        IData/*31:0*/ __VactIterCount;
        VlWide<50>/*1599:0*/ keccak_f1600__DOT__reg_state;
        VlWide<50>/*1599:0*/ keccak_f1600__DOT__round_out_s;
        QData/*63:0*/ keccak_f1600__DOT__round_constant;
        VlWide<50>/*1599:0*/ keccak_f1600__DOT__round_inst__DOT__rho_in;
        VlWide<50>/*1599:0*/ keccak_f1600__DOT__round_inst__DOT__rho_out;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vkeccak_f1600__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkeccak_f1600___024root(Vkeccak_f1600__Syms* symsp, const char* v__name);
    ~Vkeccak_f1600___024root();
    VL_UNCOPYABLE(Vkeccak_f1600___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
