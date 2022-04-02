#include<stdio.h>

int main (void) {
    int n, x, y;
    double div;
    scanf("%d", &n);

    while(n--) {
        scanf("%d %d", &x, &y);

        if (y == 0) {
            printf("divisao impossivel\n");
        }
        else {
            div =(double) x / y;
            printf("%.1lf\n",div);
        }

    }

    return 0;
}