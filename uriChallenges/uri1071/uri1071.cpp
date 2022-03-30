#include<stdio.h>

int main (void) {
    int x, y, res = 0;
    int min, max;
    scanf("%d%d", &x, &y);

    if(x < y){
        min = x; 
        max = y;
    } 
    else {
        max = x; 
        min = y;
    }  


    for(int i = (min + 1); i < max; i++) {

        if(i % 2 != 0) {
        res += i;  
        }
    }

    printf("%d\n", res);

    return 0;
}