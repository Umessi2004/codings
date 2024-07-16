#include<stdio.h>
void swap(int *a, int *b){
     int temp=*a;
     *a=*b;
     *b=temp;
}
void insertion(int arr[], int n){
     for (int i=1;i<=n-1; i++){
          int j=i;
          while (j>=1 && arr[j]<arr[j-1]){
               swap(&arr[j], &arr[j-1]);
               j--;
          }
     }
     printf("the sorted array is:");
     for (int i=0; i<n; i++){
          printf("%d ", arr[i]);
     }
}    
int main(){
     int n;
     printf("enter the size:");
     scanf("%d",  &n);
     int arr[n];
     printf("enter the elements:");
     for (int i=0; i<n; i++){
          scanf("%d", &arr[i]);
     }
     insertion(arr, n);
     //logic
     /*for (int i=1;i<=n-1; i++){
          int j=i;
          while (j>=1 && arr[j]<arr[j-1]){
               swap(&arr[j], &arr[j-1]);
               j--;
          }
     }
     printf("the sorted array is:");
     for (int i=0; i<n; i++){
          printf("%d ", arr[i]);
     }*/
     return 0;
}
     