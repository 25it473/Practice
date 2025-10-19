//Program to read and print N intergers using an array
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d integers: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nEntered array: [");
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
        if(i<n-1) {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}