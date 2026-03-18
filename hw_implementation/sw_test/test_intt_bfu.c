#include <stdint.h>
#include <stdio.h>
#include "params.h"
#include "reduce.h"

void intt_bfu_c(int32_t a, int32_t b, int32_t zeta, int32_t *a_out, int32_t *b_out) {
    int32_t sum  = a + b;
    int32_t diff = a - b;
    int64_t prod = (int64_t)zeta * diff;
    int32_t reduced = montgomery_reduce(prod);

    *a_out = sum;
    *b_out = reduced;
}

int main() {
    int32_t a = 123456;
    int32_t b = 654321;
    int32_t zeta = 7;
    int32_t a_out, b_out;

    intt_bfu_c(a, b, zeta, &a_out, &b_out);
    printf("a_out=%d, b_out=%d\n", a_out, b_out);
}