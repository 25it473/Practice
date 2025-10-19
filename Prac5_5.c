//Program to insert value at a specific position in an array
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

    printf("\nEnter the position to insert the new element (1 to %d): ", n);
    scanf("%d",&c);
    if(c<1 || c>n+1) {
        printf("Invalid position!\n");
        return 0;
    }
    printf("Enter the value to insert: ");
    scanf("%d",&arr[c-1]);
    printf("\n Array after insertion: [");
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
        if(i<n-1) {
            printf(", ");   
        }
    }
    printf("]\n");
    return 0;
}