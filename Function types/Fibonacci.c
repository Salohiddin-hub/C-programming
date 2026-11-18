#include <stdio.h>

int Fib(int n);

int main(void) {
    int n;
    printf("Enter the n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("0 yoki katta butun son kiriting.\n");
        return 1;
    }

    printf("Fib=%d\n", Fib(n));
    for (int i = 0; i <= n; i++) {
        printf("%d\t", Fib(i));
    }
    printf("\n");

    return 0;
}

int Fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return Fib(n - 1) + Fib(n - 2);
}
