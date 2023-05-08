// Write a C program to display the n terms of odd natural numbers and their sum.

#include <stdio.h>

int main()
{
    int i, n, res, sum;

    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        res = (i % 2 == 0);
        sum = res + i;
    }
    printf(" Odd number is = %d ", res);
}