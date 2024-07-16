#include<stdio.h>
int power(int a, int b)
{
     if (b==0) return 1;
     a=a*power(a, b-1);
     return a;
}
int main()
{
     printf("%d", power(3,4));
     return 0;
}