// Write a program in C to display the multiplication table for a given integer.

#include <stdio.h>

int main()
{
    int i, n, res;
    printf("Please input a number what are you need multiplication: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        res = i * n;
        printf("%d * %d = %d", n, i, n * i);
        printf(" muliplication number is: %d \n", res);
    }
}