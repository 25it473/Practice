//Define sturcture called student 
#include <stdio.h>

struct student {
    char name[50];
    int roll_no;
    int marks[5];
};

int main() {
    struct student s1;

    // Input student details
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter marks for 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s1.marks[i]);
    }

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, s1.marks[i]);
    }

    return 0;
}