//Program to add first N number using function with argument and return type
#include <stdio.h>

int addNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    
    int result = addNumbers(N);
    printf("The sum of the first %d natural numbers is: %d\n", N, result);
    
    return 0;
}