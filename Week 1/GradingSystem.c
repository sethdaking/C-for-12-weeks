#include <stdio.h>

int Grading(int score) {
    if (score >= 90) {
        return 1; // A
    }
    else if (score >= 80) {
        return 2; // B
    }
    else if (score >= 70) {
        return 3; // C
    }
    else if (score >= 60) {
        return 4; // D
    }
    else {
        return 5; // F
    }
}

int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    int grade = Grading(score);
    printf("Your grade is: ", grade);

    switch (grade) {
        case 1:
        printf("A\n");
        break;
        case 2:
        printf("B\n");
        break;
        case 3:
        printf("C\n");
        break;
        case 4:
        printf("D\n");
        break;
        case 5:
        printf("F\n");
        break;
        default:
        printf("Invalid grade\n");
    }

    return 0;
}