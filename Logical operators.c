// #include <stdio.h>
// #define N 100
// #define A 2
// int main() {
//     int  a;
//     a=A;
    
//     while(a<N){
//     printf("%d\n", a);
//     a*=a;
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int  m=5;
    int n=5;
    ++m;
    n++;
    
    printf("%d\n", m);
    printf("%d\n", n);
    
    return 0;
}






main()
{
    int a,b,c,x,y,z;
    int p,q,r;
    printf("Enter three integer numbers\n");
    scanf("%d %*d %d",&a,&b,&c);
    printf("%d %d %d \n\n",a,b,c);
    printf("Enter two 4-digit numbers\n");
    scanf("%2d %4d",&x,&y);
    printf("%d %d\n\n", x,y);
    printf("Enter two integers\n");
    scanf("%d %d", &a,&x);
    printf("%d %d \n\n",a,x);
    printf("Enter a nine digit number\n");
    scanf("%3d %4d %3d",&p,&q,&r);
    printf("%d %d %d \n\n",p,q,r);
    printf("Enter two three digit numbers\n");
    scanf("%d %d",&x,&y);
    printf("%d %d",x,y);
}

