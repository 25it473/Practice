//Program to check whether student is pass or fail based on average of four subjects' marks
#include <stdio.h>
int main() {
    int mark1, mark2, mark3, mark4;
    float average;
    // Input: marks of four subjects
    printf("Enter marks of subject 1: ");
    scanf("%d", &mark1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &mark2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &mark3);
    printf("Enter marks of subject 4: ");
    scanf("%d", &mark4);
    // Calculate average
    average = (mark1 + mark2 + mark3 + mark4) / 4.0;
    // Check pass or fail
    if (average >= 35.0) {
        printf("Student has passed with an average of %.2f\n", average);
    } else {
        printf("Student has failed with an average of %.2f\n", average);
    }
    return 0;
}