#include <stdio.h>
#include <stdlib.h>
void merge(int A[], int low, int mid, int high)
{
    int i, j, k;
    int B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++;
            i++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (i=low; i<=high; i++){
        A[i]=B[i];
    }
}
void printlist(int A[], int n){
    for (int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
void mergesort(int A[], int low, int high){
    int mid;
    if(low<high){
        mid=(high+low)/2;
        mergesort(A, low, mid);
        mergesort(A, mid+1, high);
        merge(A, low, mid, high);
    }
}
int main()
{
    int A[]={7,8,9,12,1,16,4};
    printf("PREVIOUS LIST: ");
    for (int i=0; i<7; i++){
        printf("%d ", A[i]);
    }printf("\n");
    int n=7;
    mergesort(A, 0, 6);
    printf("MERGED SORT list: ");
    printlist(A, 7);
    return 0;
}