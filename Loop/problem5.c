// Write a program in C to display the cube of the number up to an integer.

#include <stdio.h>

int main()
{
    int i, n, res;
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        res = i * i * i;
    }
    printf("Cube number is: %d ", res);
}