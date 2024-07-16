//smallest between 3 numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 3 numbers==");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("%d is the smallest no.", a);
    }
    else if (b < c && b < a)
    {
        printf("%d is the smallest no.", b);
    }
    else
    {
        printf("%d is the smallest no.", c);
    }
    printf("\n");
    return 0;
}