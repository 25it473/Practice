//write a function power() to calculate x raised to the power y (i.e., x^y)  and return double type value
#include <stdio.h>
#include <math.h>
int power(double x, double y) {
    double result = 1.0;
    for(int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    double result = power(base, exponent);
    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, result);
    return 0;
}
