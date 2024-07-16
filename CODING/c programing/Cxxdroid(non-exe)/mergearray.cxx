#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("ENTER ARRAY 1 AND ARRAY 2 SIZE: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    n3 = n1 + n2;
    int arr[n1], brr[n2], crr[n3];
    printf("ENTER THE ELEMENTS OF ARRAY 1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE ELEMENTS OF ARRAY 2: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }
    for (int i = 0, j = n1; i < n2 && j < n3; i++, j++)
    {
        crr[j] = brr[i];
    }
    printf("THE MERGED ARRAY:  ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ", crr[i]);
    }
    return 0;
}