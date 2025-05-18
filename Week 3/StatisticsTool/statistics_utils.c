#include "statistics.h"

// Mean function
double mean(const double *arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

//  Median function
double median(const double *arr, int size) {
    double median;
    if (size % 2 == 0) {
        median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        median = arr[size / 2];
    }
    return median;
}

// Mode function
double mode(const double *arr, int size) {
    double mode = arr[0];
    int maxCount = 0;
    int count = 1;
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

// Standard deviation function
double standard_deviation(const double *arr, int size) {
    double meanValue = mean(arr, size);
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += (arr[i] - meanValue) * (arr[i] - meanValue);
    }
    return sqrt(sum / size);
}

// Variance function
double variance(const double *arr, int size) {
    double meanValue = mean(arr, size);
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += (arr[i] - meanValue) * (arr[i] - meanValue);
    }
    return sum / size;
}

// Range function
double range(const double *arr, int size) {
    double minValue = arr[0];
    double maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue - minValue;
}

// Minimum function
double min(const double *arr, int size) {
    double minValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}

// Maximum function
double max(const double *arr, int size) {
    double maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

// Sum function
double sum(const double *arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}