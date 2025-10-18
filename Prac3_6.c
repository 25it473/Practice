//Program to display grade according to marks
#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered.\n");
    } else if (marks >= 80 && marks <= 100) {
        printf("Distinction\n");
    } else if (marks >= 60 && marks <= 79) {
        printf("First class\n");
    } else if (marks >= 35 && marks <= 59) {
        printf("Second class\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}