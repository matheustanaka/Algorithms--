#include<stdio.h>

/*
    Formula pra resolver o problema sendo L largura metros e C comprimento metros:
    2.(l-1) + 2.(c-1)  lajotas do tipo 2
    l.c + (l-1)*(c-1) lajotas do tipo 1
*/

int main (void) {
    
    int l, c;
    scanf("%d %d", &l, &c);

    printf("%d\n%d\n",  2*(l-1)+2*(c-1),
    l*c + (l-1)*(c-1));
    
    return 0;
}