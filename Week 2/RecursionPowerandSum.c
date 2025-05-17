#include <stdio.h>

// Recursive function to calculate power: base^exponent
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;  // base case: anything^0 = 1
    else
        return base * power(base, exponent - 1);
}

// Recursive function to calculate sum of first n natural numbers
int sum(int n) {
    if (n == 0)
        return 0;  // base case: sum of 0 is 0
    else
        return n + sum(n - 1);
}

int main() {
    int base, exponent, num;

    // Power calculation
    printf("Enter base and exponent (e.g., 2 3): ");
    scanf("%d %d", &base, &exponent);
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    // Sum calculation
    printf("Enter a number to find sum of natural numbers up to n: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers = %d\n", num, sum(num));

    return 0;
}
