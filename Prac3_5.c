//Program to check given character is an alphabet (uppercase or lowercase), digit or special character
#include <stdio.h>
int main() {
    char ch;

    // Input: a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet, digit or special character
    if (ch>='A' && ch<='Z') {
        printf("%c is an alphabet with uppercase.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is an alphabet with lowercase.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}