//Program to check whether given number is armstrong or not
#include <stdio.h>
#include <math.h>

int main() {
    long int b, n, x, a=0;

    printf("Enter a number: ");
    scanf("%ld",&n);
    b=n;

    while(n>0) {
        x = n%10;
        a = a + pow(x,3);
        n = n/10;
    }
    printf("\nSum of cube of each number is %ld",a);
    if(a==b) {
        printf("\nIt is a armstrong number.");
    }
    else {
        printf("\nIt is not an armstrong number.");
    }
    return 0;
}