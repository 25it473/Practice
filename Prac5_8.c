//Program to display sum of rows and sum of columns of a matrix
#include <stdio.h>

int main() {
    int a[50][50];
    int i, j, x, y, rowSum, colSum;

    // Input for number of rows and columns
    printf("\nEnter number of rows and columns : ");
    scanf("%d%d", &x, &y);

    // Input for first matrix
    printf("Enter elements of matrix:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("Element [%d][%d]: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // Displaying the matrix
    printf("\nEntered matrix is:\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // Calculating and displaying sum of each row
    for (i = 0; i < x; i++) {
        rowSum = 0;
        for (j = 0; j < y; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }       
    // Calculating and displaying sum of each column
    for (j = 0; j < y; j++) {
        colSum = 0;
        for (i = 0; i < x; i++) {
            colSum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }
    return 0;
}
