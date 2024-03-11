#include <stdio.h>

void inputMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[100][100], matrix2[100][100], result[100][100];

    inputMatrix(matrix1, rows, cols);

    displayMatrix(matrix1, rows, cols);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows, &cols);

    inputMatrix(matrix2, rows, cols);

    displayMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nMatrix Addition:\n");
    displayMatrix(result, rows, cols);

    subtractMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nMatrix Subtraction:\n");
    displayMatrix(result, rows, cols);

    multiplyMatrices(matrix1, matrix2, result, rows, cols, rows, cols);
    printf("\nMatrix Multiplication:\n");
    displayMatrix(result, rows, cols);

    return 0;
}
