// main.c
#include <stdio.h>
#include "math_utils.h"

int main() {
    int base, exp, num;

    printf("Enter base and exponent (e.g., 2 3): ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));

    printf("Enter a number to calculate sum of natural numbers: ");
    scanf("%d", &num);
    printf("Sum of first %d numbers = %d\n", num, sum(num));

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
