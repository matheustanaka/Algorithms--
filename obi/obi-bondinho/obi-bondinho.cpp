#include<stdio.h>

int maxPeople (int x, int y) {
    return ((x + y <= 50) ? printf("S\n") : printf("N\n"));
}

int main (void) {

    int a, m;

    scanf("%d %d", &a, &m);

    printf("%d\n", maxPeople(a, m));

    return 0;
}