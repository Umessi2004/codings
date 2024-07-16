#include<stdio.h>

// Function to find the transpose of a matrix
void transpose(int rows, int cols, int matrix[][10],int transposed[][10]) {

    // Computing the transpose
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    // Displaying the transpose
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the size of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the matrix elements
    int matrix[10][10];
    int transposed[10][10];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Call the transpose function
    transpose(rows, cols, matrix,transposed);

    return 0;
}
