#include <stdio.h>

int main() 
{
    int score;
    scanf("%int", &score);
    score=score/10;
    switch(score)
    {
    case 10:
    case 9:
        printf("A+");
        break;
    case 8:
        printf("B+");
        break;
    case 7:
        printf("C+");
        break;
    default:
        printf("Fail!");
        break;
    }
    return 0;
}
