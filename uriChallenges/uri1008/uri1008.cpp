#include<stdio.h>
#include<math.h>

int main (void) {
    
    int employers, workHours;
    double moneyPerHour;

    scanf("%d %d %lf", &employers, &workHours, &moneyPerHour);

    printf("NUMBER = %d\n", employers);
    printf("SALARY = U$ %0.2f\n", workHours*moneyPerHour);
    
    return 0;
}