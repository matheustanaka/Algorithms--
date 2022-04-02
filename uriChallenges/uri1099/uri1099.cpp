#include <stdio.h>

int main(void)
{

    int n, i;
    scanf("%d", &n);

    int x, y, sum;

    for (i = 1; i < n; i++)
    {
        sum = 0;
        scanf("%d%d", &x, &y);

        if (y > x)
        {
            for (int j = x+1; j < y; j++)
            {
                if (j % 2 != 0) sum+=j;
            }
        }
        else
        {
            for (int j = y+1; j < x; j++)
            {

                if (j % 2 != 0) sum+=j;
                
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}