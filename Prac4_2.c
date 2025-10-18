//Program to print 1st N odd natural numbers and calculate their sum and average
#include <stdio.h>
int main() {
    long int N , i;
    double sum = 0;
    long int count = 0;
    double average;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%ld", &N);
    // Print the first N odd natural numbers and calculate sum
    printf("The first %ld odd natural numbers are:\n", N);
    for(i = 1; i <= N; i++) {
        if (i % 2 == 1) {
        printf("%ld\n", i);
        sum += i;
        count++;
        }
    }
    // Calculate average
    average = (double)sum / count;

    // Print sum and average
    printf("Sum of the first %ld odd natural numbers is: %.0lf\n", N, sum);
    printf("Average of the first %ld odd natural numbers is: %.2lf\n", N, average);   
    return 0;
}