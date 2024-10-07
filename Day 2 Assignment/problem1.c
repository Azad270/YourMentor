#include <stdio.h>

int main() {
    int num;

    while (1) {
        // Asking the user for input
        printf("Enter a number (enter -999 to stop): ");
        scanf("%d", &num);

        // Check if user wants to stop the input
        if (num == -999) {
            printf("Exiting the program.\n");
            break;  // Exit the loop
        }

        // Skip if the number is negative
        if (num < 0) {
            goto skip;  // Jump to the 'skip' label
        }

        // Print non-negative numbers
        printf("You entered a non-negative number: %d\n", num);

        skip:  // Label to skip negative numbers
        continue;  // Continue to the next iteration of the loop
    }

    return 0;
}
