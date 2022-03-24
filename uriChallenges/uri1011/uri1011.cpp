#include<stdio.h>
#include<math.h>

int main (void) {

    double r;

    scanf("%lf", &r);

    printf("VOLUME = %0.3f\n", (4/3.0) * 3.14159 * pow(r , 3.0));

    return 0;
}