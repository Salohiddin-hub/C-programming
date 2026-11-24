// Write a C program to print a number, its square and cube repeatedly in range (1, n).
#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        printf("\nNumber: %d | Square: %d | Cube: %d", i, i*i, i*i*i );
    }
    return 0;
}