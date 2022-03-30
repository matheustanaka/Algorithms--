#include<stdio.h>

int main (void) {

    int n = 5, countEven = 0, countOdd = 0, 
    countPositive= 0, countNegative = 0;
    int num;

    while(n--) {
        scanf("%d", &num);

        (num % 2 == 0) ? countEven++ : countOdd++;
        if(num > 0) countPositive++;
        if(num < 0) countNegative++; 

    }

    printf("%d valor(es) par(es)\n", countEven);
    printf("%d valor(es) impar(es)\n", countOdd);
    printf("%d valor(es) positivo(s)\n", countPositive);
    printf("%d valor(es) negativo(s)\n", countNegative);
    

    return 0;
}