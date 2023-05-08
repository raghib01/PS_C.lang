// Write a C program to compute the sum of the first 50 natural numbers

#include <stdio.h>
int main()
{
    int i, sum;
    sum = 0;

    for (i = 1; i <= 50; i++)
    {
        sum = sum + i;
        printf("%d ", i);
        }
    printf("The sum is = %d ", sum);
}