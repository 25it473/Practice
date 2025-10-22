//Programm to find given number is even or odd without return type
#include <stdio.h>

void num(int a);
int main() {
    int a;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    num(a);
    return 0;
}

void num(int a) {
    if(a%2==0) {
        printf("\n%d is even numebr. ",a);
    }
    else {
        printf("\n%d is odd number",a);
    }
}