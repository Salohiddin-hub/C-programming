
#include <stdio.h>

int main() {
    int math, physics, programming;
    int total;
    float average;

    math=85;
    physics=75
    programming=90;
    
    total = math + physics + programming;
    average = total / 3.0;

    printf("\nTotal marks: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 60 && math >= 40 &&
        physics >= 40 && programming >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    printf("Grade: %c\n",
           average >= 90 ? 'A' :
           average >= 80 ? 'B' :
           average >= 70 ? 'C' :
           average >= 60 ? 'D' : 'F');

    return 0;
}
