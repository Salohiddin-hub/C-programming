// Write a C program to print numbers from 75 to 15 (counts downwards) with intervals of 5.
#include <stdio.h>
int main(){
    int num=75;
    for (num; num>=15; num-=5){
        printf(" %d ", num);
    }

}
