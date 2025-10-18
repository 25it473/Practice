//Program to print 1st N natural numbers
#include <stdio.h>
int main() {
    int N, i;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Print the first N natural numbers
    printf("The first %d natural numbers are:\n", N);
    for(i = 1; i <= N; i++) {
        printf("%d\n", i);
    }

    return 0;
}