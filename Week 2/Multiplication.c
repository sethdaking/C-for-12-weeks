#include <stdio.h>

int main () {
    int number =0;
    do {
        printf("Enter a number greater than 0: ", number);
        scanf("%d", &number);
    } while (number <= 0);

    printf("The number is: %d\n", number);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}