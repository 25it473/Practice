//Program to search an element in an array
#include <stdio.h>

int main() {
    int n,i,a,in,flag=0;
    int arr[50];
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nEntered array: [");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
        if(i<n-1) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("Enter element to search: ");
    scanf("%d",&a);
    for(i=0;i<n;i++) {
        if(arr[i]==a) {
            flag=1;
            in=i+1;
            break;
        }
    }
    if(flag==1) {
        printf("Element %d found at position %d\n",a,in);
    } else {
        printf("Element %d not found in the array\n",a);
    }
    return 0;
}