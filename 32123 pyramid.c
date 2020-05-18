#include <stdio.h>

int main()
{
    int i, j, k, l ,n;
    scanf("%d",&n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j > 1; j--)
        {
            printf(" ");
        }
        for (k = n; k >= i; k--)
        {
            printf("%d", k);
        }
        for (l = k+2; l <= n; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}
