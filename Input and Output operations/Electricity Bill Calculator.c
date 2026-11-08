#include <stdio.h>
int main() {
    int customerNo, units;
    float bill;

    printf("Enter customer number: ");
    scanf("%d", &customerNo);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        bill = units * 0.50;
    }
    else if (units <= 400) {
        bill = 100 + (units - 200) * 0.65;
    }
    else if (units <= 600) {
        bill = 230 + (units - 400) * 0.80;
    }
    else {
        bill = 390 + (units - 600) * 1.00;
    }

    printf("\nCustomer Number: %d\n", customerNo);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}
