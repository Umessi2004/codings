#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;  // for left node
    int right = 2 * i + 2; // for right node

    // to check the lagrest ele is in the root
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest!=i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n)
{
    // to create max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    // to create heap sort array
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]); // to remove the root as the max element
        heapify(arr, i, 0);     // to create again max heap
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("enter the size of the arary:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    heapsort(arr, n);
    printf("the sorted array is:\n");
    printarray(arr, n);
    return 0;
}