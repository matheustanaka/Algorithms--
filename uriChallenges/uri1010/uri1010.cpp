#include<stdio.h>

int main (void) {

    int codeProduct1, codeProduct2, unit1, unit2;
    double price1, price2;

    scanf("%d %d %lf %d %d %lf", &codeProduct1, &unit1, &price1, &codeProduct2, &unit2, &price2);

    printf("VALOR A PAGAR: R$ %0.2f\n", (unit1 * price1) + (unit2 * price2));

    return 0;
}