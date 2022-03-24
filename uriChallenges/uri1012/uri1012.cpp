#include<stdio.h>
#include<math.h>

int main (void) {

    double a, b, c;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo = (a*c)/2;
    circulo = pow(c, 2.0) * 3.14159;
    trapezio = ((a+b)*c) / 2;
    quadrado = pow(b, 2.0);
    retangulo = a * b;

    printf("TRIANGULO: %0.3f\n", triangulo);
    printf("CIRCULO: %0.3f\n", circulo);
    printf("TRAPEZIO: %0.3f\n", trapezio);
    printf("QUADRADO: %0.3f\n", quadrado);
    printf("RETANGULO: %0.3f\n", retangulo);

    return 0;
}