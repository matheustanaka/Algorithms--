#include<stdio.h>

int main (void) {

    int n, cont;
    scanf("%d", &cont);

    for(int i = 1; i <= cont; i++) {
        scanf("%d", &n);
        if(n % 2 == 0) {
            if(n == 0) {
                printf("NULL\n");
            }
            else if(n < 0) {
                printf("EVEN NEGATIVE\n");
            }
            else {
                printf("EVEN POSITIVE\n");
            }
        }
        else {
            if(n < 0) {
                printf("ODD NEGATIVE\n");
            }
            else {
                printf("ODD POSITIVE\n");
            }
        }
    }

    return 0;
}