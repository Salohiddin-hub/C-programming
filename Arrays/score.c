#include <stdio.h>

int main() {

    int marks[50] = {
        43, 65, 51, 27, 79, 11, 56, 61, 82, 9, 25, 36, 7, 49, 55, 63, 74, 81, 49, 37,
        40, 49, 16, 75, 87, 91, 33, 24, 58, 78, 65, 56, 76, 67, 45, 54, 36, 63, 12, 21,
        73, 49, 51, 19, 39, 49, 68, 93, 85, 59
    };

    int count[11] = {0};

    for (int i = 0; i < 50; i++) {
        int group = marks[i] / 10;
        count[group]++;
    }

    printf("The number of students regarding the grades:\n");
    printf("---------------------------------------\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d - %2d : %d tudents\n", i * 10, i * 10 + 9, count[i]);
    }
    printf("100     : %d ta students\n", count[10]);

    return 0;
}
