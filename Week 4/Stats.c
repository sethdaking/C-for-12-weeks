#include <stdio.h>
#include <stdlib.h>

// Function to get min
int getMin(int *arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min)
            min = *(arr + i);
    }
    return min;
}

// Function to get max
int getMax(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}

// Function to get average
float getAverage(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return (float)sum / size;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // 🧠 Dynamic memory allocation
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 🎯 Input elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    // 📊 Print stats
    printf("Min: %d\n", getMin(arr, n));
    printf("Max: %d\n", getMax(arr, n));
    printf("Average: %.2f\n", getAverage(arr, n));

    // 🚫 Free memory
    free(arr);

    return 0;
}
