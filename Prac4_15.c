//Program to calculate sum of each digit of given number
#include <stdio.h>

int main() {
    long int n,x,s=0;

    printf("Enter a number: ");
    scanf("%ld",&n);
    while(n>0) {
        x=n%10;
        s=s+x;
        n=n/10;
    }
    printf("\nSum of each digit is %ld",s);
    return 0;
}