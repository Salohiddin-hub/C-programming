#include <stdio.h>
#include <math.h>
int main() {
    int a, i;
    long int n1=0, n2=1, term;
   
    printf("Enter the number: ");
    scanf("%d", &a);
    for (i=1; i<=a; ++i)
    {
        printf("%ld", n1);
        term=n1+n2;
        n1=n2;
        n2=term;
    }
    
    return 0;
}
