//    Write a C program to print a number, its square and cube repeatedly in range (1, n).
#include <stdio.h>

int square(int n);
int cube(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    fflush(stdout);
    scanf("%d", &n);
    for (int i=1; i<=n; ++i){
        printf("%d\t%d\t%d\n", i, square(i), cube(i));
    }
    return 0;
}
int square(int n){
    return n*n;
}
int cube(int n){
    return n*n*n;
}
