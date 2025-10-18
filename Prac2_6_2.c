//Program for swapping two numbers without using a temporary variable
#include <stdio.h>

int main() {
    int num1, num2;
    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping: num1 = %d, num2 = %d", num1, num2);
    
    // Swapping without using a temporary variable
    num1 = num1 + num2; // Step 1: Add both numbers and store in num1
    num2 = num1 - num2; // Step 2: Subtract new num1 by num2 to get original num1
    num1 = num1 - num2; // Step 3: Subtract new num2 from new num1 to get original num2
    
    printf("\nAfter swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}   