#include<stdio.h>
#include<math.h>
int main (void) {

    int seconds, hours, minutes;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds -= hours * 3600;

    minutes = seconds/60;
    seconds -= minutes * 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}