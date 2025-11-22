#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

