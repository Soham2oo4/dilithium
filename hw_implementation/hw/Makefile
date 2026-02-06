.PHONY: all clean run

VERILATOR = verilator
TOP = ntt_full
SOURCES = ntt_full.v ntt_controller.v ntt_ram.v ntt_bfu.v zetas_rom.v
TB = tb_ntt_full.cpp

all: obj_dir/V$(TOP)

obj_dir/V$(TOP): $(SOURCES) $(TB) ../ntt.c ../reduce.c
	$(VERILATOR) --cc $(SOURCES) \
		--exe $(TB) ../ntt.c ../reduce.c \
		--top-module $(TOP) \
		-CFLAGS "-I. -I.. -g" \
		-LDFLAGS "-lm"
	make -C obj_dir -f V$(TOP).mk

run: obj_dir/V$(TOP)
	./obj_dir/V$(TOP)

clean:
	rm -rf obj_dir