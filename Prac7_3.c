//Pogram to find maximun out of three number using function with arguments and return type
#include <stdio.h>
int maximum(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int main() {
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = maximum(num1, num2, num3);
    printf("The maximum number is: %d\n", max);
    return 0;
}
