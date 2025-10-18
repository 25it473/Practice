//Program to check largest of three numbers using nested if-else
#include <stdio.h>
int main() {
    int num1, num2, num3;

    // Input three numbers from user
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    printf("Enter Third number: ");
    scanf("%d", &num3);

    // Check for the largest number using nested if-else
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%d is the largest number.\n", num1);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("%d is the largest number.\n", num2);
        } else {
            printf("%d is the largest number.\n", num3);
        }
    }

    return 0;
}