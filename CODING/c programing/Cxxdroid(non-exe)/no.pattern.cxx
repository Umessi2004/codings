#include <stdio.h>
int main()
{
    int a = 5;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = a; j <= 8; j++)
        {
            printf("%d", j);
        }
        a++;
        printf("\n");
    }
}