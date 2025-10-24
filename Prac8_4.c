//Structure array of student details
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[3];
    int i;

    // Input student details
    for(i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}