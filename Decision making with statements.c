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








#include <stdio.h>

int main() {
    int customer_num;
    float units, amount;

    // Prompt user for input[span_0](start_span)[span_0](end_span)
    printf("Enter Customer Number: ");
    scanf("%d", &customer_num);

    printf("Enter Power Consumed (in units): ");
    scanf("%f", &units);

    // Calculate total amount based on the rate slab[span_1](start_span)[span_1](end_span)
    if (units <= 200) {
        amount = units * 0.50;
    } else if (units <= 400) {
        amount = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        amount = 230 + (units - 400) * 0.80;
    } else {
        amount = 390 + (units - 600) * 1.00;
    }

    // Print the results[span_2](start_span)[span_2](end_span)
    printf("\nCustomer Number : %d\n", customer_num);
    printf("Units Consumed  : %.2f\n", units);
    printf("Amount to Pay   : Rs. %.2f\n", amount);

    return 0;
}

