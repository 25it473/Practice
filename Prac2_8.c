//Program to convert days into years, weeks and days
#include <stdio.h>
int main() {
    int total_days, years, weeks, days;

    // Input: total number of days
    printf("Enter total number of days: ");
    scanf("%d", &total_days);

    // Calculate years, weeks and remaining days
    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = (total_days % 365) % 7;

    // Output the result
    printf("%d days is equivalent to %d years, %d weeks and %d days.\n", total_days, years, weeks, days);

    return 0;
}