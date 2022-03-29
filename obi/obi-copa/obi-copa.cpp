#include<stdio.h>

int main (void) {

    int l, k;

    scanf("%d %d", &l, &k);

    ((l - 1) / 2 == (k-1)/ 2) ? printf("oitavas\n") : 
    ((l - 1) / 4 == (k-1)/ 4) ? printf("quartas\n") :
    ((l - 1) / 8 == (k-1)/ 8) ? printf("semifinal\n") :
    printf("final\n");

    return(0);
}