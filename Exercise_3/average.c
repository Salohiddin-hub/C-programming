// Write a C program that finds average of first ‘n’ numbers using loop. Read ‘n’ from user.
#include <stdio.h>
int main(){
    int num, sum=0;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    
    for (int i=1; i<=num; i++){
        sum+=i;
    }
    printf("\nAverage of first %d numbers: %d", num, (float)sum/num);
    return 0;
}