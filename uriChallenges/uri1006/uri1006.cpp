#include<stdio.h>
#include<math.h>

int main(void) {

    double a, b, c; 

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("MEDIA = %0.1f\n", (a*2 + b*3 + c*5) / 10.0);

    return 0;
}