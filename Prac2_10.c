//Program to calculate simple interest
#include <stdio.h>
int main() {
    double principal, rate, time, simple_interest;

    // Input: principal amount, rate of interest and time period
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter time period (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2lf\n", simple_interest);

    return 0;
}   