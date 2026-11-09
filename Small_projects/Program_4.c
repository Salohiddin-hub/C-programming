// Write a C program that accepts any number and prints the number of digits in that number.
#include <stdio.h>
int main(){
    long long n;
    int count=0;
    printf("Enter the value of n: ");
    scanf("%lld", &n);
    if (n==0){
        count=1;
    }
    else{
        if (n<0){n=-n;}
        while (n>0){
            n=n/10;
            count++;
        }
    }
    printf("The number of digits: %d\n", count);
}