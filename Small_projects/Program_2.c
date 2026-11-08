// Write a C program that finds average of first ‘n’ numbers using loop. Read ‘n’ from user.
#include <stdio.h>
int main(){
    int n;
    float sum=0.0, average;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n<=0)
    {
        printf("Please, enter positive number!\n");
        return 1;
    }
    for (int i=1; i<=n; i++)
    {
        sum+=i;
    }
    average=sum/n;
    printf("The average is %.2f\n", average);

}
