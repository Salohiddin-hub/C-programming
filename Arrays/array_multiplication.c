#include <stdio.h>
#define MAX 10

int main() {
    int A[MAX][MAX], B[MAX][MAX], Data[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter the row and column of Matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter the row and column of Matrix B: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible!\n");
        return 1;
    }

    printf("\nEnter the elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter the elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            Data[i][j] = 0; 
            for (int k = 0; k < c1; k++) {
                Data[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", Data[i][j]);
        }
        printf("\n");
    }

    return 0;
}