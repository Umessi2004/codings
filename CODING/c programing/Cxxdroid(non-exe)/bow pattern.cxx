#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF N: ");
    scanf("%d", &n);
    int spc = n * 2 - 2;
    int str = n - 1;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 0; j < spc; j++)
        {
            printf(" ");
        }
        spc = spc - 2;
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    spc = 2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < str; j++)
        {
            printf("*");
        }
        for (int j = 0; j < spc; j++)
        {
            printf(" ");
        }
        spc = spc + 2;
        for (int j = 0; j < str; j++)
        {
            printf("*");
        }
        str--;
        printf("\n");
    }
    return 0;
}