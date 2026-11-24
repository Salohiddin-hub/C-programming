// Write a C program to check whether a given number is prime or not.
#include <stdio.h>
int main(){
    int num, IsPrime=1;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    if (num<=1){
        IsPrime=0;
    }
    for (int i=2; i<=num/2; ++i){
        if (num % i == 0){
            IsPrime=0;
            break;
        }
    }
    if (IsPrime == 1){
        printf("\nA Prime number");
    }
    else{
        printf("\nNot a Prime number");
    }
}