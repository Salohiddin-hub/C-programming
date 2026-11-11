#include <stdio.h>
int main(){
    int a=12;
    char line[a];
    gets(line);
    for (int i=0; i<a; ++i){
        for(int j=0; j<=i; ++j){
            printf("%c", line[j]);
        }
        printf("\n");
    }

}