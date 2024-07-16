#include <stdio.h>

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond);

int main()
{
    int rowsFirst, colsFirst, rowsSecond, colsSecond;

    // Input for the dimensions of the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rowsFirst, &colsFirst);

    // Input for the dimensions of the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rowsSecond, &colsSecond);

    // Check if multiplication is possible
    if (colsFirst != rowsSecond)
    {
        printf("Error: Multiplication is not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 1; // Exit with an error code
    }

    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsFirst; ++i)
    {
        for (int j = 0; j < colsFirst; ++j)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsSecond; ++i)
    {
        for (int j = 0; j < colsSecond; ++j)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowsFirst, colsFirst, rowsSecond, colsSecond);

    // Displaying the multiplication result
    printf("Product of the matrices:\n");
    for (int i = 0; i < rowsFirst; ++i)
    {
        for (int j = 0; j < colsSecond; ++j)
        {
            printf("%d\t", result[i][j]);
            if (j == colsSecond - 1)
                printf("\n");
        }
    }

    return 0;
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond)
{
    for (int i = 0; i < rowsFirst; ++i)
    {
        for (int j = 0; j < colsSecond; ++j)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rowsFirst; ++i)
    {
        for (int j = 0; j < colsSecond; ++j)
        {
            for (int k = 0; k < colsFirst; ++k)
            {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
