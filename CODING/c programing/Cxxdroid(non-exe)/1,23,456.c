#include<stdio.h>
int main()
{
    int a, i=1;
    printf("ENTER A NUMVER:");
    scanf("%d", &a);
    int b=0;
    while(b!=a)
    {          
        for (int j=1; j<=i; j++)
        {
            if (b!=a)
            {
                b++;
                printf("%d ", b);
            }
            else
            {
                break;
            }
        }
        i++;
        printf("\n");
    }
    return 0;
}