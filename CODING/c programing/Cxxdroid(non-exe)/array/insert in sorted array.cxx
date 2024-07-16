#include<stdio.h>
int main()
{
     int n;
     printf("enter the size: ");scanf("%d", &n);
     int arr[n+1];
     printf("enter a sorted array:");
     for (int i=0; i<n; i++)
          scanf("%d", &arr[i]);
     int x;printf("enter a number to insert:");scanf("%d", &x);
     int i;
     for (i=n;i>=0 && arr[i]>x; i--)
     {
          arr[i+1]=arr[i];
     }
     arr[i+1]=x;
     for (int i=0; i<n+1; i++)
          printf("%d ", arr[i]);                  
     return 0;
}