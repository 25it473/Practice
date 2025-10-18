//Program to covert temperature from Celsius to Fahrenheit or farhenheit to Celsius
#include <stdio.h>

int main() {
    int choice;
    double celsius, fahrenheit;
    
    // Display menu
    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Convert Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("Temperature in Fahrenheit: %.2lf\n", fahrenheit);
    } 
    else if (choice == 2) {
        // Convert Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2lf\n", celsius);
    } 
    else {
        // Invalid choice
        printf("Invalid choice! Please select 1 or 2.\n");
    }
    
    return 0;
}