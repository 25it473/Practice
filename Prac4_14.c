//Program to chec whether given number is armstrong number or not
#include <stdio.h>
#include <math.h>

int main()
{
    int b,n,x;
    double a;
    printf("Enter a number: ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        x=n%10;
        a+=(double)pow(x,3);
        n=n/10;
    }
    printf("\nSum of cubes of digits: %.0lf",a);
    if(a==b)
        printf("\n%d is an Armstrong number.",b);
    else
        printf("\n%d is not an Armstrong number.",b);
    return 0;
}