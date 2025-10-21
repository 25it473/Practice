//Program to copy one string to another without using library function
#include <stdio.h>

int main() {
    char str[100], cpy[100];
    int i;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //Display the entered string
    printf("You entered: %s", str);

    for(i=0;str[i]!='\0';i++) {
        cpy[i] = str[i];
    }

    // Ensure the copied string is null-terminated
    cpy[i] = '\0';

    // Display the copied string
    printf("Copied string is: %s", cpy);

    return 0;
}