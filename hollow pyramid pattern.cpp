// Write a C program to print a centred pyramid in hollow format.
#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter the value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("1");
        }
        else if (i == n)
        {
            for (j = 1; j <= (2 * n - 1); j++)
            {
                printf("1");
            }
        }
        else
        {
            printf("1");
            for (j = 1; j <= (2 * i - 3); j++)
            {
                printf(" ");
            }
            printf("1");
        }

        printf("\n");
    }

    return 0;
}
