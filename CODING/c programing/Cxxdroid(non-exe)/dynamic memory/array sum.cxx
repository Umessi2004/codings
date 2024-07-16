#include <stdio.h>
#include <stdlib.h>
int sum(int []);
int main()
{
    int *arr = (int *)malloc(10 * sizeof(int *));
    printf("enter the elements:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int s=sum(arr);
    printf("the sum of elements is:%d", s);
    return 0;
}
int sum(int arr[]){
     int s=0;
     for (int i=0; i<10; i++){
          s+=arr[i];
     }
     return s;
}