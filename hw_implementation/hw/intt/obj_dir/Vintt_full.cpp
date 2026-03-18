// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vintt_full__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vintt_full::Vintt_full(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vintt_full__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , ext_addr{vlSymsp->TOP.ext_addr}
    , ext_we{vlSymsp->TOP.ext_we}
    , state_out{vlSymsp->TOP.state_out}
    , len_exp_out{vlSymsp->TOP.len_exp_out}
    , start_idx_out{vlSymsp->TOP.start_idx_out}
    , j_idx_out{vlSymsp->TOP.j_idx_out}
    , write_addr_out{vlSymsp->TOP.write_addr_out}
    , write_en_out{vlSymsp->TOP.write_en_out}
    , write_b_en_out{vlSymsp->TOP.write_b_en_out}
    , j_reg_out{vlSymsp->TOP.j_reg_out}
    , j_plus_len_reg_out{vlSymsp->TOP.j_plus_len_reg_out}
    , bfu_valid_out{vlSymsp->TOP.bfu_valid_out}
    , j_comb_out{vlSymsp->TOP.j_comb_out}
    , j_plus_len_comb_out{vlSymsp->TOP.j_plus_len_comb_out}
    , k_out{vlSymsp->TOP.k_out}
    , ext_data_out{vlSymsp->TOP.ext_data_out}
    , ext_data_in{vlSymsp->TOP.ext_data_in}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vintt_full::Vintt_full(const char* _vcname__)
    : Vintt_full(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vintt_full::~Vintt_full() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vintt_full___024root___eval_debug_assertions(Vintt_full___024root* vlSelf);
#endif  // VL_DEBUG
void Vintt_full___024root___eval_static(Vintt_full___024root* vlSelf);
void Vintt_full___024root___eval_initial(Vintt_full___024root* vlSelf);
void Vintt_full___024root___eval_settle(Vintt_full___024root* vlSelf);
void Vintt_full___024root___eval(Vintt_full___024root* vlSelf);

void Vintt_full::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vintt_full::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vintt_full___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vintt_full___024root___eval_static(&(vlSymsp->TOP));
        Vintt_full___024root___eval_initial(&(vlSymsp->TOP));
        Vintt_full___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vintt_full___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vintt_full::eventsPending() { return false; }

uint64_t Vintt_full::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vintt_full::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vintt_full___024root___eval_final(Vintt_full___024root* vlSelf);

VL_ATTR_COLD void Vintt_full::final() {
    Vintt_full___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vintt_full::hierName() const { return vlSymsp->name(); }
const char* Vintt_full::modelName() const { return "Vintt_full"; }
unsigned Vintt_full::threads() const { return 1; }
void Vintt_full::prepareClone() const { contextp()->prepareClone(); }
void Vintt_full::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vintt_full::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vintt_full___024root__trace_decl_types(VerilatedVcd* tracep);

void Vintt_full___024root__trace_init_top(Vintt_full___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vintt_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintt_full___024root*>(voidSelf);
    Vintt_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vintt_full___024root__trace_decl_types(tracep);
    Vintt_full___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vintt_full___024root__trace_register(Vintt_full___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vintt_full::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vintt_full::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vintt_full___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
