#include<stdio.h>

int main (void) {

    int d;

    scanf("%d", &d);

    // if(d <= 800) {
    //     printf("1\n");
    // }
    // else if(d <= 1400) {
    //     printf("2\n");
    // }
    // else if (d <=2000) {
    //     printf("3\n");
    // }
    
    printf("%d\n", d <= 800 ? 1 : (d <=1400 ? 2 : 3));

    return 0;
}