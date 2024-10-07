#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Asking the user to input the operation
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c to consume any trailing newline

    // Asking the user for two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch statement to perform the appropriate operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Check if division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            // If the operator is not one of the specified cases
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
