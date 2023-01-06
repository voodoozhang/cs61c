#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
    x = (x >> (n));
    return x & 1; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
//    if (get_bit(*x, n) != v) {
//        if (v == 1) {
//            *x = *x | (1 << n);
//        } else {
//            *x = *x - (get_bit(*x, n) << n);
//        }
//    }
//
//    int m = *x >> (n + 1);
//    m = m << (n + 1);
    *x=~*x;
    *x=*x|1<<n;
    *x=(~*x)|v<<n;

    /* YOUR CODE HERE */
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
//    /* YOUR CODE HERE */
//    if (get_bit(*x, n) == 1)set_bit(x, n, 0);
//    else set_bit(x, n, 1);
    *x=~*x;
    *x=*x^1<<n;
    *x=(~*x);
}

