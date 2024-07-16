#include<stdio.h>
int lsearch(int arr[], int n, int x){
    for (int i=0; i<n; i++)
    {
        if (x==arr[i])
        {
            return i;
        }
    }
    return -1;
}
         
int main()
{
    int n;printf("ENTER THE LENGTHH OF ARRAY: ");scanf("%d", &n);
    int arr[n];
    printf("ENTER AN ARRAY: ");
    for (int i=0; i<n;  i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("ENTER THE ELEMENT YOU WANT TO SEARCH: ");
    scanf("%d", &x);
    /*for (int i=0; i<n; i++)
    {
        if (x==arr[i])
        {
            printf("number: %d, loction: %d ", arr[i], i);
        }
        else
        {
            printf("element not found");
            break;
        }
    }*/
    int res=lsearch(arr, n, x);
    if (res!=-1){
         printf("number: %d, loction: %d ", arr[res], res);
    }
    else{
         printf("element not found");
    }
    return 0;
}