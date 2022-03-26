#include<stdio.h>
#include<stdlib.h>

int main (void) {
    int a, b, c, ab; 
    scanf("%d %d %d", &a, &b, &c);

    ab = (a + b + abs(a-b)) / 2;
    printf("%d eh o maior\n", (ab + c + abs(ab-c)) /2);
    return 0;
}