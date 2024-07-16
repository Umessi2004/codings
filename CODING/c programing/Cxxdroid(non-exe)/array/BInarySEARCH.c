//binary search
#include <stdio.h>
#define max 100
int arr[max];
int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    // If target is not found in array
    return -1;
}

int main()
{
    //int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size;
    printf("enter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("enter the elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("enter the target:");
    scanf("%d", &target);
    int result = binarySearch(arr, size, target);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
