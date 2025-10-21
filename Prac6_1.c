//Program to read string and fing string length without using library function
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //Display the entered string
    printf("You entered: %s", str);

    // Calculate length of string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Adjust length if newline character is present
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    // Display the length of the string
    printf("Length of the string is: %d\n", length);

    return 0;
}