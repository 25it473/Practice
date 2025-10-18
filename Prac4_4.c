//Program to print all even numbers between given two numbers and calculate their sum and average
#include <stdio.h>
int main() {
    long int x, y;
    long int sum = 0;
    long int count = 0;
    double avg;

    // Input lower and upper limits
    printf("Enter the lower limit: ");
    scanf("%ld", &x);
    printf("Enter the upper limit: ");
    scanf("%ld", &y);

    // Print even numbers and calculate sum and count
    printf("Even numbers between %ld and %ld are:\n", x, y);
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) { // Check for even numbers
            printf("%ld ", i);
            sum += i;
            count++;
        }
    }

    // Calculate average
    if (count > 0) {
        avg = (double)sum / count ;
    } else {
        avg = 0; // To handle case when there are no even numbers
    }

    // Print sum and average
    printf("\nSum: %ld\n", sum);
    printf("Average: %.2lf\n", avg);

    return 0;
}