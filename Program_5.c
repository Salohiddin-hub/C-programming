// Write a C program to check whether a given number is prime or not.
#include <stdio.h>
#include <math.h>
int main(){
    int n, isPrime=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;}

    else if (n == 2) {
        isPrime = 1;} 
   
    else if (n % 2 == 0) {
        isPrime = 0;}

    else{
        for (int i=3; i<=sqrt(n); i+=2){
            if (n % i == 0){
                isPrime=0;
                break;
            }
        }
    }

    if (isPrime == 0){
        printf("%d is not a prime number.\n", n);
    }
    else{
        printf("%d is a prime number.\n", n);
    }
    return 0;
}
                
