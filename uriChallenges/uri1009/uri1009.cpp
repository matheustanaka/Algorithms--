#include<stdio.h>

int main (void) {

    char str[50];
    double salary, sales;

    scanf("%s %lf %lf", &str, &salary, &sales);
    printf("TOTAL = R$ %0.2f\n", (sales*0.15) + salary);
    
    return 0;
}