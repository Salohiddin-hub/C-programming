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
        result=a+b;
        printf("Addtion: %d", result);
        break;
    case '-':
        result=a-b;
        printf("Subtraction: %d ", result);
        break;
    case '*':
        result=a*b;
        printf("Multiplication: %d", result);
        break;
    case '/':
       result=a/b;
       printf("Division: %d", result);
       break;
   
    }
   
}
