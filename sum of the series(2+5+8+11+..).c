// Write a C program to find the sum of the series:
// 2+5+8+11+… up to n terms
#include <stdio.h>

int main()
{
    int n, i = 1, term = 2, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + term;
        term = term + 3;
        i++;
    }

    printf("Sum of the series = %d\n", sum);

    return 0;
}

