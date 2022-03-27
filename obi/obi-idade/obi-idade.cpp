#include<stdio.h>

int mymax ( int x, int y) {
    //using ternary operators ? = if   : = else
    return (x >= y) ? x : y;
}

int main (void) {

    int m, a, b, c;

    scanf("%d %d %d", &m, &a, &b);

    // if(m >= 40 && m <=110 && a >= 1 && a < m && b >= 1 && b < m && a != b) {
    //     printf("%d\n", m - (a + b));
    // }
    // The comment is an example of a bad solution, i did it wrong, see the best solution below:
    c = m - a - b;
    //calling a function to check what's bigger than others.
    printf("%d\n", mymax(mymax(a, b), c));
    return 0;
}