// Write a C program to print numbers from 75 to 15 (counts downwards) with intervals of 5.
#include <stdio.h>
int main(){
    int x=75;
    for (x; x>=15; x-=5){
        printf("%d\n", x);
    }
    return 0;
}