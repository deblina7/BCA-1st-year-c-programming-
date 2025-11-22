#include <stdio.h>
int main() 
{
    int n,i,j,k;
    printf("Enter no of rows:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) 
	{
        // print spaces (n - i)
        for (k = 1; k <= n - i; k++) 
		{
            printf(" ");
        }
        // print $ symbols (i times)
        for (j = 1; j <= i; j++) 
		{
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

