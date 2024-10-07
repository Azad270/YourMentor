#include <stdio.h>

int main() {
    int a, b;

    // Asking the user for input
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display the original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using arithmetic operations
    a = a + b; // Step 1: a becomes sum of a and b
    b = a - b; // Step 2: b becomes the original value of a
    a = a - b; // Step 3: a becomes the original value of b

    // Display the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
