#include<stdio.h>
#include<math.h>
#include <cmath>

int main (void) {

    double x1, y1, x2, y2, distance, p1, p2;
    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    p1 = pow((x2 - x1), 2.0);
    p2 = pow((y2 - y1), 2.0);
    distance = p1 + p2;

    printf("%.4f\n", sqrt(distance));
    return 0;
}