#include <stdio.h>

void main() {
    int m, n;
    printf("Enter the order of matrix (m x n): ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], c[m][n];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum of matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];  
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
