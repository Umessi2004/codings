#include<stdio.h>
int factorial(int a)
{
     if (a==0 || a==1)
          return 1;
     else
          return a*factorial(a-1);
}
int main()
{
     int n;
     printf("enter n:");scanf("%d", &n);
     printf("%d", factorial(n));
     return 0;
}     