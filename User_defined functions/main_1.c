#include <stdio.h>
int add(int x, int y);
int mul(int x, int y);

void main()
{
    int res;
    int MUL;
    int x, y;

    printf("Enter the values of x and y");
    scanf("%d%d", &x,&y);

    res=add(x,y);
    printf("Sum=%d", res);

    MUL=mul(x, y);
    printf ("Multiplication=%d", MUL);

}
int add(int x, int y)
{

    return x+y;
}

int mul(int x, int y)
{
    return x*y;
}
