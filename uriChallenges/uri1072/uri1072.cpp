#include<stdio.h>

int main (void) {

    int n, x, contIn = 0, contOut = 0;
    scanf("%d", &x);

    for(int i = 1; i <= x; i++) {
        scanf("%d", &n);
            if((n >= 10) && (n <= 20)) contIn++;
            else contOut++;
    }
    
    printf("%d in\n", contIn);
    printf("%d out\n", contOut);

    return 0;
}