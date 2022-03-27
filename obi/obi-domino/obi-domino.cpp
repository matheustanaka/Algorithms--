#include<stdio.h>

int duploN (int x) {
    int formula;

    formula = ((x + 1) * (x + 2)) / 2;

    return formula;
}

int main (void) {

    int n;

    scanf("%d", &n);

    printf("%d\n", duploN(n));

    return 0;
}