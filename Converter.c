#include <stdio.h>

int convertCelsiusToFahrenheit(float celsius) {
    
    return (celsius * 9/5 + 32);
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    float fahrenheit = convertCelsiusToFahrenheit(celsius);
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
    
    getchar(); // Wait for user input before closing the console window
    return 0;
}