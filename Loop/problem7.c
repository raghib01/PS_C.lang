#include <stdio.h>

int main()
{
    int i, n, res;
    res = 0;

    for (n = 1; n <= 10; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            res = i * n;
            printf("%d ", res);
        }
        printf("\n");
    }
    return 0;
}