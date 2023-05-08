// Write a program in C to display n terms of natural numbers and their sum.

#include <stdio.h>
int main()
{
    int n, i, sum;

    sum = 0;

    scanf("%d\n ", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d ", sum);
}
