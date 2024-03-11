#include <stdio.h>

#define SIZE 10

void printSpiralPattern(int matrix[SIZE][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int num = 1;

    int startRow = 0, endRow = SIZE - 1, startCol = 0, endCol = SIZE - 1;

    while (startRow <= endRow && startCol <= endCol) {
        for (int i = startCol; i <= endCol; i++) {
            matrix[startRow][i] = num++;
        }
        startRow++;

        for (int i = startRow; i <= endRow; i++) {
            matrix[i][endCol] = num++;
        }
        endCol--;

        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                matrix[endRow][i] = num++;
            }
            endRow--;
        }

        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                matrix[i][startCol] = num++;
            }
            startCol++;
        }
    }

    printSpiralPattern(matrix);

    return 0;
}
