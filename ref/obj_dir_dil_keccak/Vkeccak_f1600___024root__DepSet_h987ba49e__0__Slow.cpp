// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeccak_f1600.h for the primary calling header

#include "Vkeccak_f1600__pch.h"
#include "Vkeccak_f1600__Syms.h"
#include "Vkeccak_f1600___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeccak_f1600___024root___dump_triggers__stl(Vkeccak_f1600___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vkeccak_f1600___024root___eval_triggers__stl(Vkeccak_f1600___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vkeccak_f1600__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeccak_f1600___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vkeccak_f1600___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
