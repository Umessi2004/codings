//sorting of 2 arrays
#include<stdio.h>
void bubblesort(int arr[], int n){
     
     for(int i=0; i<n-1; i++)
     {
          for (int j=0; j<n-i-1; j++)
          {
               if (arr[j]>arr[j+1])
               {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               }
          }
     }
     for (int i=0; i<n;  i++)
     {
          printf("%d ", arr[i]);
     }
     
}
int main()
{
     int n;
     printf("ENTER THE SIZE OF ARRAY:");
     scanf("%d", &n);
     int arr[n];
     printf("ENTER THE ELEMENTS OF ARRAY: ");
     for (int i=0; i<n; i++)
     {
          scanf("%d", &arr[i]);
     }
     /*for(int i=0; i<n-1; i++)
     {
          for (int j=0; j<n-i-1; j++)
          {
               if (arr[j]>arr[j+1])
               {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               }
          }
     }
     for (int i=0; i<n;  i++)
     {
          printf("%d ", arr[i]);
     }*/
     printf("the sorted array is:");
     bubblesort(arr, n);
     return 0;
}