#include <stdio.h>
#include "statistics.h"

int main() {
    double data[] = {1.0, 2.0, 2.0, 3.0, 4.0};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Mean: %.2f\n", mean(data, size));
    printf("Median: %.2f\n", median(data, size));
    printf("Mode: %.2f\n", mode(data, size));
    printf("Standard Deviation: %.2f\n", standard_deviation(data, size));
    printf("Variance: %.2f\n", variance(data, size));
    printf("Range: %.2f\n", range(data, size));
    printf("Min: %.2f\n", min(data, size));
    printf("Max: %.2f\n", max(data, size));
    printf("Sum: %.2f\n", sum(data, size));

    return 0;
}