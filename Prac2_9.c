//Program to separate rupees and paise from a given amount
#include <stdio.h>
int main() {
    float amount;
    int rupees, paise;

    // Input: total amount in rupees (with paise as decimal)
    printf("Enter the amount in rupees (e.g., 123.45): ");
    scanf("%f", &amount);

    // Separate rupees and paise
    rupees = amount; // Extract the integer part for rupees
    paise = ((amount - rupees) * 100); // Extract the decimal part for paise

    // Output the result
    printf("Rupees: %d, Paise: %d\n", rupees, paise);

    return 0;
}