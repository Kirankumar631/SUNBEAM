#include <stdio.h>

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int r1, int c1, int c2) {
    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) { // c1 is the common dimension
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Error! Matrix multiplication is not possible.\n");
        return 1;
    }

    // Input elements for the first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, r1, c1, c2);

    // Display result
    printf("Resultant Matrix after Multiplication:\n");
    displayMatrix(result, r1, c2);

    return 0;
}

