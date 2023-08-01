#include <stdio.h>
#include <math.h>

#define MAX_ROWS 100
#define MAX_COLS 100

double matrixFrobeniusNorm(int matrix[MAX_ROWS][MAX_COLS], int R, int C) {
    double sum = 0.0;
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            sum += matrix[i][j] * matrix[i][j];
        }
    }

    return sqrt(sum);
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int R, C;

    // Get the number of rows and columns from the user
    printf("Enter the number of rows (R): ");
    scanf("%d", &R);

    printf("Enter the number of columns (C): ");
    scanf("%d", &C);

    // Check if the entered dimensions are valid
    if (R <= 0 || C <= 0) {
        printf("Invalid dimensions. Rows and columns must be positive integers.\n");
        return 1; // Exit the program with an error status
    }

    // Read the matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("The entered matrix is:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Find and print the Frobenius norm of the matrix
    double norm = matrixFrobeniusNorm(matrix, R, C);
    printf("Frobenius norm of the matrix: %lf\n", norm);

    return 0;
}
