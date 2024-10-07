#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;  // Factorial can get large, so we use unsigned long long

    // Asking the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the input is negative
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Using a for loop to calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
