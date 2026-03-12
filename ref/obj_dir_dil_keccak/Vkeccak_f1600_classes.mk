# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vkeccak_f1600.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vkeccak_f1600 \
	Vkeccak_f1600___024root__DepSet_h987ba49e__0 \
	Vkeccak_f1600___024root__DepSet_h084e17a4__0 \
	Vkeccak_f1600___024root__DepSet_h084e17a4__1 \
	Vkeccak_f1600___024root__DepSet_h084e17a4__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vkeccak_f1600__ConstPool_0 \
	Vkeccak_f1600___024root__Slow \
	Vkeccak_f1600___024root__DepSet_h987ba49e__0__Slow \
	Vkeccak_f1600___024root__DepSet_h084e17a4__0__Slow \
	Vkeccak_f1600___024root__DepSet_h084e17a4__1__Slow \
	Vkeccak_f1600___024unit__Slow \
	Vkeccak_f1600___024unit__DepSet_h5037a846__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vkeccak_f1600__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
