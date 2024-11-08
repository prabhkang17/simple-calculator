#include <stdio.h>

int main() {
    // Declare variables to store numbers and the operator
    double num1, num2, result;
    char operator;

    // Displaying options for the user
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c to consume any leading newline character

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}