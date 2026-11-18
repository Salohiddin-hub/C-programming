#include <stdio.h>
int Fact(int n);
int main(){
int n;
printf("Enter the n: ");
scanf("%d", &n);
printf("Fact=%d", Fact(n));

}
int Fact(int n){
if (n==0)
    return 1;
return n*Fact(n-1);
}
