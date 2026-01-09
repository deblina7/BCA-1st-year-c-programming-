// Write a C program to display the Fibonacci series up to n terms (starting from 0 and 1).
#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}

