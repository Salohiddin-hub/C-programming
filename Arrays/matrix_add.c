#include <stdio.h>
int main(){
    int r1, r2, c1, c2;

    printf("Enter the value of row and columns of A matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the value of row and columns of B matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (r1 != r2 || c1 != c2){
        printf("Error. Dimensions of both Matrix must be same!");
        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c1];

    printf("Enter the elements of A matrix:\n");
    for (int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter the elements of B matrix: \n");
    for (int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    for (int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }    
    return 0;
}