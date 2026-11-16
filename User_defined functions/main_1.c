#include <stdio.h>

void add();
void sub(int x, int y);
int mul();
int div(int x, int y); 

int main()
{
    add();

    int x, y, m, d;
    printf("\nEnter the values of x and y for subtraction: "); 
    scanf("%d%d", &x, &y);
    sub(x, y);

    m = mul();
    printf("\nMultiplication= %d", m); 

    printf("\nEnter the values of x and y for division: "); 
    scanf("%d%d", &x, &y);
    d = div(x, y);
    printf("\nDivision= %d\n", d); 

    return 0;
}

void add()
{
    int x, y;
    printf("Enter the values of x and y for addition: ");
    scanf("%d%d", &x, &y);
    printf("\nSum=%d", x + y);
}

void sub(int x, int y)
{
    printf("\nSubtraction=%d", x - y);
}

int mul()
{
    int x, y;
    printf("\nEnter the values of x and y for multiplication: ");
    scanf("%d%d", &x, &y);
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}