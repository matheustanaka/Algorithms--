#include<stdio.h>

int main (void) {
    double score, d = 0, div, sum = 0;

    while(1) {
         
        scanf("%lf", &score);

        if(score >= 0 && score <= 10) {
            d++;
            sum = sum + score;
        }
        else { 
            printf("nota invalida\n");
        }

        if(d == 2) {
            break;
        }    

    }
    div = sum / 2.00;
    printf("media = %.2lf\n", div);

    return 0;
}