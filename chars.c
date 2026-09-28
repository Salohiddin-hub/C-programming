
#include <stdio.h>

int main(void)
{
    int a, b, c, x, y, z;
    int p, q, r;

    
    printf("Enter three integer numbers\n");
    scanf("%d %*d %d", &a, &b); 
    printf("%d %d\n\n", a, b);

    printf("Enter two 4-digit numbers\n");
    scanf("%2d %4d", &x, &y);
    printf("%d %d\n\n", x, y);

    printf("Enter two integers\n");
    scanf("%d %d", &a, &x);
    printf("%d %d\n\n", a, x);

    printf("Enter a nine digit number\n");
    scanf("%3d %4d %3d", &p, &q, &r);
    printf("%d %d %d\n\n", p, q, r);

    printf("Enter two three digit numbers\n");
    scanf("%d %d", &x, &y);
    printf("%d %d\n", x, y);

    return 0;
}





#include <stdio.h>

int main(void)
{
    char x = 'A';
    char name[20] = "ANIL KUMAR GUPTA";

    printf("OUTPUT OF CHARACTERS\n\n");
    printf("%c\n%3c\n%5c\n", x, x, x);
    printf("%3c\n%c\n", x, x);
    printf("\n");

    printf("OUTPUT OF STRINGS\n\n");
    printf("%s\n", name);
    printf("%20s\n", name);
    printf("%20.10s\n", name);
    printf("%.5s\n", name);
    printf("%-20.10s\n", name);
    printf("%5s\n", name);

    return 0;
}



