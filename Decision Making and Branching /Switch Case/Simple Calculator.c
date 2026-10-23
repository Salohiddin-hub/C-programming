#include <stdio.h>

int main() 
{
    int a, b;
    int result;
    char op;
    printf("\nEnter + - * /: ");
    op=getchar();
    printf("Enter two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    switch(op)
    {
    case '+':
        printf("Addtion: %d", a+b);
        break;
    case '-':
        printf("Subtraction: %d ", a-b);
        break;
    case '*':
        printf("Multiplication: %d", a*b);
        break;
    case '/':
       if (b == 0)
       {
           printf("Division by zero is not allowed");
       }
        printf("Division: %d", a/b);
       break;
   
    }
   
}
