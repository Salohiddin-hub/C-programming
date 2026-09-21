// #include <stdio.h>

// int main() {
//     int months, days;
//     printf("Enter days: ");
//     scanf("%d", &days);

//     months=days /30;
//     days=days % 30;
//     printf("Months = %d = Days= %d", months, days);
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int number, a, b, c, d, result1, result2;
    printf("Enter number: ");
    scanf("%d", &number);
    
    a=number/1000;
    b=(number%1000)/100;
    c=(number%100)/10;
    d=number%10;

    result1=a+c;
    result2=b+d;
    printf("First sum = %d = Second sum= %d", result1, result2);
    
    return 0;
}
