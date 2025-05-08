#include <stdio.h>

int BMICalculator (float mass, float height) {
    float BMI = mass / (height * height);

    return BMI;
    
}

int main () {
    float mass, height;
    printf("Enter your mass in kg: ");
    scanf("%f", &mass);
    printf("Enter your height in m: ");
    scanf("%f", &height);

    float BMI = BMICalculator(mass, height);
    printf("Your BMI is: %.2f\n", BMI);

    return 0;

}