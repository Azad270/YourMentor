#include<stdio.h>
int isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4
    // but not divisible by 100, unless it is also divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // True
    } else {
        return 0; // False
    }
}
 int main() {
    int year;

    // Ask the user to input a year
    printf("Please enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}