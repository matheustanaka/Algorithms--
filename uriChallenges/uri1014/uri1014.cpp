#include<stdio.h>
#include<math.h>

int main (void) {

    int km;
    double litros, total;

    scanf("%d %lf", &km, &litros);
    total = km / litros;
    printf("%.3lf km/l\n", total);
    return 0;
}