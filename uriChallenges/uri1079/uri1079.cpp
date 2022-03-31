#include<stdio.h>

int main (void) {

    int n;
    double note1, note2, note3;
    double weight1 = 2, weight2 = 3, weight3 = 5;
    double avarage;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%lf %lf %lf", &note1, &note2, &note3);
        avarage = ((note1*weight1) + (note2*weight2) + (note3*weight3)) / (weight1+weight2+weight3);
        printf("%.1lf\n", avarage);
    }
    return 0;
}