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



// #include <stdio.h>

// int main() {
//     int x;
    
//     printf("Enter the number: ");
//     scanf("%d", &x);
        
//     if (x%4 == 0 && x%100 != 0 || x%400 != 0)
//     {
//         printf("Leap Year");
//     }
//     else
//     {
//         printf("Not Leap Year");
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);
        
    if (x>y )
    {
        if (x>z)
        {
            printf("The biggest number is: %d", x);
        }
        else
        {
            printf("The biggest number is: %d", z);
        }
    }else
    {
        if(y>z)
        {
            printf("The biggest number is: %d", y);
        }
        else
        {
            printf("The biggest number is: %d", z);
        }
    }
    
    
    return 0;
}
