#include <stdio.h>
int main() 
{
    int n,j,k,i;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    for (i = n; i >= 1; i--) 
	{
        // print left spaces
        for (k = 0; k < n - i; k++) 
		{
            printf(" ");
        }

        // print numbers 1 to i
        for (j = 1; j <= i; j++) 
		{
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

