//Program to read name and print ASCII values of first character
#include <stdio.h>

int main() {
    char name[100];
    
    // Input name from user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    // Display the entered name
    printf("You entered: %s", name);
    
    // Print ASCII value of the first character
    if (name[0] != '\0' && name[0] != '\n') {
        printf("The ASCII value of the first character '%c' is: %d\n", name[0], (int)name[0]);
    } else {
        printf("No valid character entered.\n");
    }
    
    return 0;
}
