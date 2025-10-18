//Program to assining values to variables using post increment and pre increment operators
#include <stdio.h>
int main() {
    int a, b, c, d;
    
    // Using post-increment operator
    a = 5;
    b = a++; // b gets the value of a (5), then a is incremented to 6
    printf("Using post-increment:\n");
    printf("a = %d, b = %d\n", a, b); // a = 6, b = 5

    // Using pre-increment operator
    c = 5;
    d = ++c; // c is incremented to 6, then d gets the value of c (6)
    printf("Using pre-increment:\n");
    printf("c = %d, d = %d\n", c, d); // c = 6, d = 6

    return 0;
}