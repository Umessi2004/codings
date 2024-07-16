#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of  n==");
    scanf("%d", &n);
    int i, j, spc = n - 1, str = 1;
    for (i = 0; i <= 2 * n - 1; i++)
    {
        for (j = 0; j <= spc; j++)
        {
            printf(" ");
        }
        for (j = 0; j < str; j++)
        {
            printf("* ");
        }
        if (i < n - 1)
        {
            spc--;
            str++;
        }
        else
        {
            spc++;
            str--;
        }
        printf("\n");
    }
    return 0;
}