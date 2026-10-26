#include <stdio.h>
#include <math.h>
int main() {
    int a, i;
    long int fact=1;
   
    printf("Enter the number: ");
    scanf("%d", &a);
    for (i=1; a>0; --a)
    {
        fact=fact*a;
    }
    printf("%ld", fact);
    return 0;
}
