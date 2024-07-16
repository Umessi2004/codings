//patternofnumbers
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF N:");
    scanf("%d", &n);
    int a = 0;
    for (int i = 1; a != n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a != n)
            {
                a++;
                printf("%d ", a);
            }
            else if (a == n)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}