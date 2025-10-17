//Program to find area of triangle
#include <stdio.h>

int main() {
    double a,b,c,s,area;
    // Input lengths of the sides of the triangle
    printf("Enter length of side a: "); 
    scanf("%lf", &a);
    printf("Enter length of side b: ");
    scanf("%lf", &b);
    printf("Enter length of side c: ");
    scanf("%lf", &c);
    // Calculate semi-perimeter
    s = (a + b + c) / 2;
    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    // Output the result
    printf("Area of triangle: %.2lf\n", area);
    
    return 0;
}   