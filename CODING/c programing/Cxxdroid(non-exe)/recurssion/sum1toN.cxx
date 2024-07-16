#include<stdio.h>
//easy way 1:
int sum(int n)
{
     int s=0;
     if (n==1) return 1;
     s=n+sum(n-1);
     return s;
}
//tricky way:
/*void sum(int n, int s){
     if(n==0)
     {
          printf("%d  ", s);
          return;
     }
     sum (n-1, s+n);
     return;
}*/
int main()
{
     printf("%d", sum(5));
     return 0;
}