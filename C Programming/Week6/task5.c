/*Write a C program to read elements in two matrices and add elements of both matrices*/
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int sum[ROWS][COLS];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    printf("Sum of the two matrices:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
