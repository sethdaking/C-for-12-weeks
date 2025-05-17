// math_utils.c
#include "math_utils.h"

// Recursive power function
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

// Recursive sum function
int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

// Recursive factorial function
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
