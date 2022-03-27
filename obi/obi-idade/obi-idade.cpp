#include<stdio.h>

int main (void) {

    int m, a, b;

    scanf("%d %d %d", &m, &a, &b);

    if(m >= 40 && m <=110 && a >= 1 && a < m && b >= 1 && b < m && a != b) {
        printf("%d\n", m - (a + b));
    }

    return 0;
}