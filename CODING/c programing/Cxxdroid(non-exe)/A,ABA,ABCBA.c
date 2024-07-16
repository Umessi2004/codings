#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF CHARACTER UPTO WHICH YOU WANT TO PRINT:");
    scanf("%d", &n);
    int spc=n-1;
    if (n>=6 && n<=90)
    {
        for  (int i=65; i<=n; i++)
        {
            for (int j=65; j<=spc; j++)
            {
                printf(" ");
            }
            for (int j=65; j<=i; j++)
            {
                char c= (char)j;
                printf("%c", c);
            }
            if(i>1)
            {
                for (int j=i-1; j>=65; j--)
                {
                    char c=(char)j;
                    printf("%c", c);
                }
            }
            printf("\n");
            spc--;
        }
    }
    else
    {
        printf("CHARACTER VALUE EXCEEDS!!!\n");
    }
    return 0;
}