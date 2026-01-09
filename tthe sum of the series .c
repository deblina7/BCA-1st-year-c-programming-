// Write a C program to calculate the sum of the series: 1/1!+ 2/2!+3/3!+...n/n!
#include <stdio.h>

int main()
{
    int i = 1, a = 1, n;
    long int fact, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (a <= n)
    {
        fact = 1;
        for (i = 1; i <= a; i++)
        {
            fact = fact * i;
        }

        sum = sum + (a / fact);
        a++;
    }

    printf("Sum of the series = %ld\n", sum);

    return 0;
}

