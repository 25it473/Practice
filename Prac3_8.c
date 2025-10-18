//Program of simple calculator using if else statement
#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;

    // Ask user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Ask user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    } 
    else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    } 
    else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    } 
    else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}