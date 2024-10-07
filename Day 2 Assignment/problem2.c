#include <stdio.h>

int main() {
    int i;

    // Loop through numbers from 1 to 20
    for (i = 1; i <= 20; i++) {
        // Check if the current number is a multiple of 3
        if (i % 3 == 0) {
            continue;  // Skip the rest of the loop for this iteration
        }

        // Print the number if it's not a multiple of 3
        printf("%d\n", i);
    }

    return 0;
}
