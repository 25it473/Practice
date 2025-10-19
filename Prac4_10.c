//Program to print series 1-x^1/1! + x^2/2! - x^3/3! + .... + x^n/n!
#include <stdio.h>
#include <math.h>
int main() {
    int n,i;
    float x,s=0.0,t=1.0;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    s=t;
    for(i=2;i<=n;i++) {
        t=(t*x)/(i-1);
        if(i%2==0)
            s=s-t;
        else
            s=s+t;
    }
    printf("The sum of the series is: %.4f\n",s);
    return 0;
}
