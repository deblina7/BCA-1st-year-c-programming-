//Write a C program to calculate the sum of the series:
//1!+2!+3!+5!+.. upto n terms
#include <stdio.h>

int main()
{
    int n, i, j;
    long long fact, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + fact;
    }

    printf("Sum of the series = %lld\n", sum);

    return 0;
}



