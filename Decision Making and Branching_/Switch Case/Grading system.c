#include <stdio.h>

int main() 
{
    int score;
    start:
    printf("\nEnter your score: ");
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
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
        printf("Enter a valid score!");
        break;
    default:
        printf("Enter a valid score!");
        break;
    }
    goto start;
}
