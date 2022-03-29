#include<stdio.h>
#include<stdlib.h>

int main (void) {
    int p, d_1, d_2, res;

    scanf("%d %d %d", &p, &d_1, &d_2);

    res = (d_1 + d_2) % 2;

    if((p == 0 && res == 0) || (p == 1 && res == 1))
        printf("0\n");
    else
        printf("1\n");        

    return 0;
}