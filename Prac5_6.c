//Program to delete value at a specific position in an array
#include <stdio.h>

int main() {
    int n, i, c;
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

    printf("\nEnter the position to delete the element (1 to %d): ", n);
    scanf("%d",&c);
    if(c<1 || c>n+1) {
        printf("Invalid position!\n");
        return 0;
    }
    arr[c-1] = 0;
    printf("\n Array after deletation: [");
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
        if(i<n-1) {
            printf(", ");   
        }
    }
    printf("]\n");
    return 0;
}