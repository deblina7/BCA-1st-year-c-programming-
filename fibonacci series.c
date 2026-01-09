//Write a C program to display the Fibonacci series up to n terms.
#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    while (i <= n - 2)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    }

    return 0;
}

