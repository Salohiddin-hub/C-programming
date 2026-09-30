// #include <stdio.h>

// int main() {
//     int x;
    
//     printf("Enter the number: ");
//     scanf("%d", &x);
        
//     if (x%3 == 0 && x%5 == 0)
//     {
//         printf("Divisible with 3 and 5");
//     }
//     else
//     {
//         printf("Undivisible with 3 and 5");
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int x;
    
    printf("Enter the number: ");
    scanf("%d", &x);
        
    if (x%4 == 0 && x%100 != 0 || x%400 != 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    
    return 0;
}
