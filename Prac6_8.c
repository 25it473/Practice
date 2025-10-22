//Program to demonstrate all built-in fuctions of string.h library 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, World!";
    char str2[100] = "Hello, C Programming!";
    char str3[100];
    
    // strlen
    printf("Length of str1: %lu\n", strlen(str1));
    
    // strcpy
    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);
    
    // strcat
    strcat(str1, " Welcome!");
    printf("Concatenated str1: %s\n", str1);
    
    // strcmp
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (cmpResult < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }
    
    // strchr
    char *charPtr = strchr(str1, 'W');
    if (charPtr != NULL) {
        printf("Character 'W' found in str1 at position: %ld\n", charPtr - str1);
    } else {
        printf("Character 'W' not found in str1.\n");
    }
    
    // strstr
    char *substrPtr = strstr(str2, "C");
    if (substrPtr != NULL) {
        printf("Substring 'C' found in str2 at position: %ld\n", substrPtr - str2);
    } else {
        printf("Substring 'C' not found in str2.\n");
    }
    
    return 0;
}