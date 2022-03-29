#include<stdio.h>

int main (void) {

    int a1, d1, a2, d2;

    scanf("%d %d %d %d", &a1, &d1, &a2, &d2);

    (a1 != d2 && d1 == a2) ? printf("1\n") :
    (a2 != d1 && d2 == a1) ? printf("2\n") :
    printf("-1\n");

    return 0;

}