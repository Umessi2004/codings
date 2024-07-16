#include<stdio.h>
#include<limit.h>
#include<math.h>
int main()
{
     int n;
     printf("ENTER THE SIZE:");
     scanf("%d", &n);
     int arr[n];
     printf("enter the elements:");
     for (int i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
     }
     for (int i=0; i<n; i++)
     {
          for (int j=i+1; j<n; j++)
          {
               if (arr[i]==arr[j])
               {
                    arr[j]=INT_MAX;
               }
          }
     }
     for (int i=0; i<n; i++)
     {
          printf("%d ", arr[i]);
     }  
     printf("\n");    
     for (int i=0; i<n;  i++)
     {
          if (arr[i]==INT_MAX)
          {
               continue;
          }
          else
          {
               printf("%d ", arr[i]);
          }
     }
     return 0;                                                                                    
}