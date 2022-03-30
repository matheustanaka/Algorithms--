#include<stdio.h>

int main (void) {

    int n = 5, count = 0;
    int num;

    while(n--) {
        scanf("%d", &num);
        if (num % 2 == 0) count++;
    }

    printf("%d valores pares\n", count);

    return 0;
}