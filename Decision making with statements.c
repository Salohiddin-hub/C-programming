#include <stdio.h>

int main() {
    int x;
    
    printf("Enter the number: ");
    scanf("%d", &x);
        
    if (x%3 == 0 && x%5 == 0)
    {
        printf("Divisible with 3 and 5");
    }
    else
    {
        printf("Undivisible with 3 and 5");
    }
    
    return 0;
}
