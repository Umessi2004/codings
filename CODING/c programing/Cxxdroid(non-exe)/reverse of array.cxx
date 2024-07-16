#include<stdio.h>
int main()
{
    int n;printf("ENTER THE LENGTHH OF ARRAY: ");scanf("%d", &n);
    int arr[n];
    printf("ENTER AN ARRAY: ");
    for (int i=0; i<n;  i++)
    {
        scanf("%d", &arr[i]);
    }
    int brr[n];
    for (int i=0; i<n; i++)
    {
        brr[i]=arr[n-i-1];
    }
    for (int i=0; i<n; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}
    