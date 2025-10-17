//Program to find area, perimeter and diagonal of rectangle
#include <stdio.h>
#include <math.h>

int main() {
    double length, width, area, perimeter, diagonal;

    // Input length and width of rectangle
    printf("Enter length of rectangle: ");
    scanf("%lf", &length);
    printf("Enter width of rectangle: ");
    scanf("%lf", &width);

    // Calculate area, perimeter and diagonal
    area = length * width;
    perimeter = 2 * (length + width);
    diagonal = sqrt(length * length + width * width);

    // Output the results
    printf("Area of rectangle: %.2lf\n", area);
    printf("Perimeter of rectangle: %.2lf\n", perimeter);
    printf("Diagonal of rectangle: %.2lf\n", diagonal);

    return 0;
}