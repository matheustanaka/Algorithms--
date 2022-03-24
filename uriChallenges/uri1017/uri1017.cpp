#include<stdio.h>
#include<math.h>

int main (void) {

    double time, km;

    scanf("%lf %lf", &time, &km);

    printf("%0.3f\n", (time*km)/12);

    return 0;
}