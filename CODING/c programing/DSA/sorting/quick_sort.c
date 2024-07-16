#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i <= j)
    {
        while (a[i] <= pivot && i <= high)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[low], &a[j]);
    return j;
}
void quicksort(int A[], int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(A, low, high);
        quicksort(A, low, partition_index - 1);
        quicksort(A, partition_index + 1, high);
    }
}
void printlist(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int A[] = {7, 8, 9, 1, 16, 4};
    printf("PREVIOUS LIST: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    int n = 6;
    quicksort(A, 0, n-1);
    printf("quicksorted list: ");
    printlist(A, n);
    return 0;
}