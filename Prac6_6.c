//Program to count the number of words
#include <stdio.h>

int main() {
    char str[100];
    int i, words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
    }

    // To account for the last word if the string is not empty
    if(i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t') {
        words++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}