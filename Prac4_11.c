//Program to print reverse of number and check whether it is palindrome or not
#include <stdio.h>

int main() {
    long int n,b,x,rev=0;

    //Ask user for input 
    printf("Enter a number: ");
    scanf("%ld",&x);
    n=x;

    //Calculate reverse
    while(x>0) {
        b=x%10;
        rev=b+(rev*10);
        x=x/10;
    }
    printf("\nReverse of %ld is %ld",n,rev);
    if(n==rev) {
        printf("\n%ld is palindrome number.",n);
    }
    else {
        printf("\n%ld is not palindrome number.",n);
    }
    return 0;
}