#include<stdio.h>
#include<math.h>
#include <iostream>

int main(void) {
    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("MEDIA = %0.5f\n", (a*3.5 + b*7.5) / 11);
    return 0;
}                   