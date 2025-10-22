//Program to count number of occurnaces of a character in a string
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to be counted
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    // Count occurrences of the character in the string
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    // Output the result
    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}