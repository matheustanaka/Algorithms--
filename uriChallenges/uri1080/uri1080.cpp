#include<stdio.h>


int main (void) {

    int num, maxValue = 0, position = 0;


    for(int i = 1; i <= 100; i++) {
        scanf("%d", &num);
        if(maxValue < num) {
            maxValue = num;
            position = i;
        }
    }

    printf("%d\n%d\n", maxValue, position);

    return 0;
}