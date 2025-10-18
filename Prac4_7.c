//Program to calculate the factorial of a number
#include <stdio.h>
int main() {
    int number;
    long long factorial = 1;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Calculate factorial
    for(int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Output the result
    printf("Factorial of %d is %llu\n", number, factorial);

    return 0;
}