// 4. Write a program in C to read 20 numbers from the keyboard and find their sum and average.

#include <stdio.h>
void main()
{
    int i, n, sum;
    float avg;
    sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
        avg = (double)sum / n;
    }
    printf(" the sum is: %d ", sum);
    printf("Avarage is : %f", avg);
}