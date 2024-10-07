#include <stdio.h>

int main() {
    int num;

    // Infinite loop until break is encountered
    while (1) {
        // Ask the user to enter a number
        printf("Enter a number (enter -1 to exit): ");
        scanf("%d", &num);

        // Check if the user entered the exit condition
        if (num == -1) {
            printf("Exiting the loop.\n");
            break;  // Exit the loop
        }

        // Otherwise, print the entered number
        printf("You entered: %d\n", num);
    }

    return 0;
}
