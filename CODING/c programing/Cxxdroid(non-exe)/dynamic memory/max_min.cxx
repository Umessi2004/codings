#include<stdio.h>
#include<stdlib.h>
int largest(int arr[], int n){
     int m=arr[0];
     for (int i=0; i<n; i++){
          if (arr[i]>m){
               m=arr[i];
          }
     }
     return m;
}
int smallest(int arr[], int n){
     int s=arr[0];
     for (int i=0; i<n; i++){
          if (arr[i]<s){
               s=arr[i];
          }
     }
     return s;
}
int main()
{
     int n;
     printf("enter the size of the array:");
     scanf("%d", &n);
     int *arr=(int*)malloc(n*sizeof(int));
     printf("enter the elements:");
     for (int i=0; i<n; i++){
          scanf("%d", &arr[i]);
     }
     int max=largest(arr, n);
     int min=smallest(arr,n);
     printf("the largest element is: %d \nthe smallest element is: %d", max, min);
     free(arr);
     return 0;
}
     