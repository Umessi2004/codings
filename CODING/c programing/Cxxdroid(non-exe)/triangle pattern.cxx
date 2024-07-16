#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of  n==");
    scanf("%d", &n);
    int i, j, spc = n - 1;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= spc; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        spc--;
        printf("\n");
    }
    return 0;
}
