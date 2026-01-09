// Write a C program to find the sum of the following series:
// 1,2,6,9,13,16,20,…up to n terms
#include <stdio.h>

int main()
{
    int n, i, term = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    sum = sum + term; // first term (1)

    if (n >= 2)
    {
        term = term + 1; // second term = 2
        sum = sum + term;
    }

    // remaining terms
    for (i = 3; i <= n; i++)
    {
        if (i % 2 == 1)  // odd index ? +4
            term = term + 4;
        else             // even index ? +3
            term = term + 3;

        sum = sum + term;
    }

    printf("Sum of the series = %d\n", sum);

    return 0;
}

