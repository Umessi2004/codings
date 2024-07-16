#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("enter the value of a,b,c==");
    scanf("%d%d%d", &a, &b, &c);
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("the largest no. is %d", largest);
    return 0;
}
