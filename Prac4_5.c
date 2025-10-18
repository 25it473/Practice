//Program to print all number divisible by 5 and leas than 100, calculate their sum and average
#include <stdio.h>
int main() {
    long int sum = 0;
    long int count = 0;
    double avg;

    // Print numbers divisible by 5 and less than 100
    printf("Numbers divisible by 5 and less than 100 are:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) { // Check for divisibility by 5
            printf("%d ", i);
            sum += i;
            count++;
        }
    }

    // Calculate average
    if (count > 0) {
        avg = (double)sum / count ;
    } else {
        avg = 0; // To handle case when there are no such numbers
    }

    // Print sum and average
    printf("\nSum: %ld\n", sum);
    printf("Average: %.2lf\n", avg);

    return 0;
}