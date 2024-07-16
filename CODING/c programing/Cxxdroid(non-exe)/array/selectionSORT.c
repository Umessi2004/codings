// selection sort
#include <stdio.h>
int main()
{
     int n;
     printf("enter the size:");
     scanf("%d", &n);
     int arr[n];
     // input
     for (int i = 0; i < n; i++)
     {
          scanf("%d", &arr[i]);
     }
     // logic
     for (int i = 0; i < n - 1; i++)
     {
          int min_idx = i;
          for (int j = i + 1; j < n; j++)
          {
               if (arr[min_idx] > arr[j])
               {
                    min_idx = j;
               }
          }
          int temp = arr[min_idx];
          arr[min_idx] = arr[i];
          arr[i] = temp;
     }
     // printing
     printf("the sorted array is:\n");
     for (int i = 0; i < n; i++)
     {
          printf("%d ", arr[i]);
     }
     return 0;
}