#include<stdio.h>

int main (void) {

    int c1, l1, land1, c2, l2, land2;

    scanf("%d %d %d %d", &c1, &l1, &c2, &l2);

    land1 = c1 * l1;
    land2 = c2 * l2;

    printf("%d\n", (land1 > land2) ? land1 : land2);

    return 0;
}