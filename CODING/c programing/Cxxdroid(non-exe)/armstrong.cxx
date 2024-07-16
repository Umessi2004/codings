#include<stdio.h>
#include<math.h>
int main()
{
     int n;
     printf("enter a number to check:     ");
     scanf("%d", &n);
     int dig=0, cpy=n;
     while (cpy!=0)
     {
          cpy/=10;
          dig++;
     }
     cpy=n;
     int s=0;
     while (cpy!=0)
     {
          s=s+pow((cpy%10), dig);
          cpy/=10;
     }
     if (n==s) printf("armstrong");
     else printf("not armstrong");
     return 0;
}