#include<stdio.h>

#define EPS 1e-9

int main (void) {

    int n = 6, count = 0;
    double x, avarage, total;

    while(n--) {
        scanf("%lf", &x);
        if (x > EPS) {
            count++;
            total+=x;
        } 
    }

    avarage = total / count;

    printf("%d valores positivos\n", count);
    
    printf("%.1f\n", avarage);

    return 0;
}