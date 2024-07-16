#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d", &n);
    int spc=n-1;
    for  (int i=1; i<=n; i++)
    {
        for (int j=1; j<=spc; j++)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        if(i>1)
        {
            for (int j=i-1; j>=1; j--)
            {
                printf("%d", j);
            }
        }
        printf("\n");
        spc--;
    }
    return 0;
}