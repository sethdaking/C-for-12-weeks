#include <stdio.h>

int Operations(int num1, int num2) {
    int sum, difference, product;
    float quotient;
    int remainder;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;
    remainder = num1 % num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    Operations(num1, num2);
    
    return 0;
}