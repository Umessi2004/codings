#include<stdio.h>
#include<stdlib.h>
int linear_search(int *arr, int size, int x){
     for (int i=0; i<size; i++){
          if(arr[i]==x){
               return i;
          }
     }
     return -1;
}
int main()
{
     int size, x;
     printf("enter the size:");
     scanf("%d", &size);
     int* arr=(int*)malloc(size*sizeof(int*));
     printf("enter the elements:");
     for (int i=0; i<size; i++)
     {
          scanf("%d", &arr[i]);
     }
     printf("enter the element to search:");
     scanf("%d", &x);
     int result=linear_search(arr, size, x);
     if (result !=-1) {printf("element found at index %d", result);}
     else{ printf("element NOT found!!!");}
     free(arr);
     return 0;
}    