//Program to print and calculate 1+1/2+1/3+1/4+...+1/N series
#include <stdio.h>

int main() {
    long int n;
    double i, sum=0.0;
    printf("Enter number of terms: ");
    scanf("%ld",&n);
    printf("\nSum of ");
    for(i=1;i<=n;i++) {
        sum=sum+(1.0/i);
        printf("(1/%.0f)",i);
        if(i<n) {
            printf("+");
        }
    }
        printf("= %.4f",sum);
        return 0;
}