#include <stdio.h>

#define SIZE 4

int array[SIZE];
int array_2[SIZE];
int SumArray[SIZE];

void User_1(void);
void User_2(void);
void Sum(int a[], int b[], int n);

void User_1(void) {
    printf("Enter the values of array_1 (%d ta son): ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }
}

void User_2(void) {
    printf("Enter the values of array_2 (%d ta son): ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array_2[i]);
    }
}

void Sum(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        SumArray[i] = a[i] + b[i];
    }
}

int main(void) {
    User_1();
    User_2();
    Sum(array, array_2, SIZE);

    printf("Sum: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", SumArray[i]);
    }
    printf("\n");

    return 0;
}
