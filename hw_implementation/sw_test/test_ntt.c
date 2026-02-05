#include "reduce.h"
#include <stdint.h>
#include "params.h" 
#include "config.h"
#include <stdio.h>
int main(){
    int a = 1000;
    int b = 2000;
    int zeta = 12345;
    int t;
    t = montgomery_reduce((int64_t)zeta * b);
        b = a - t;
        a = a + t;
        printf("a_out=%d b_out=%d\n", a, b);
}