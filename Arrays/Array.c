#include <stdio.h>

int main() {
    
    char Name[10];
    int Year[4];
    
    printf("Enter 10 values: \n");
    for(int i=0; i<10; i++)
    {
        scanf(" %c", &Name[i]);
    }
    for(int i=0; i<10; i++)
    {
        printf("Name[%d]=%c \n ", i, Name[i]);
    }

    printf("Enter 4 values: \n");
    for(int i=0; i<4; i++)
    {
        scanf(" %d", &Year[i]);
    }
    for(int i=0; i<4; i++)
    {
        printf("Year[%d]=%d \n ", i, Year[i]);
    }
    return 0;
}
