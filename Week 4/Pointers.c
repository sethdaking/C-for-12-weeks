#include <stdio.h>

void update(int *n) {
    (*n)++;  // Increment the value at the memory address
}

int main() {
    int n = 5;
    update(&n);
    printf("%d", n);  // Output: 6
}
