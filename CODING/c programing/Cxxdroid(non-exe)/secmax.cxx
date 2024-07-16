//to print second largest element of an array
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the element: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
         printf("enter element %d: ", i+1);
         scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for (int i=0; i<n; i++)
    {
         if (arr[i]>max) max=arr[i];
    }
    for (int i=0; i<n; i++)
    {
         if ((arr[i]>smax) && (arr[i]<max)) smax=arr[i];
    }
    printf("the second max element is: %d", smax);
    return 0;
}