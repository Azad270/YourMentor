#include <stdio.h>

int main() {
    float marks;
    char grade;

    // Ask the user to input marks
    printf("Enter the marks obtained (out of 100): ");
    scanf("%f", &marks);

    // Determine the grade based on marks
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C';
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else if (marks >= 0 && marks < 60) {
        grade = 'F'; // Fail
    } else {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
        return 1; // Exit with error
    }

    // Output the grade
    printf("Your grade is: %c\n", grade);

    return 0;
}