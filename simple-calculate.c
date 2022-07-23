#include <stdio.h>

#define PRODUCTS_NUMBER 2

int main() {
    int code[PRODUCTS_NUMBER], unitNumber[PRODUCTS_NUMBER];
    double price[PRODUCTS_NUMBER];

    for (int i = 0; i < PRODUCTS_NUMBER; i++) {
        scanf("%d%d%lf", &code[i], &unitNumber[i], &price[i]);
    }

    double total = 0;
    for (int i = 0; i < PRODUCTS_NUMBER; i++) {
        total += unitNumber[i] * price[i];
    }

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
