//Program to check character is vowel or consonant
#include <stdio.h>
int main() {
    char ch;

    // Input: a character
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if the character is a vowel or consonant
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}