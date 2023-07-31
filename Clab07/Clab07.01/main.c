#include <stdio.h>
#include <stdlib.h>
#define MATRIX_SIZE 3

int main()

{
    int matrix1[MATRIX_SIZE][MATRIX_SIZE] = {
        {3, 2, 4},
        {1, 4, 6},
        {4, 3, 2}
    };

    int matrix2[MATRIX_SIZE][MATRIX_SIZE] = {
        {2, 6, 3},
        {4, 3, 2},
        {5, 1, 7}
    };

    int sumMatrix[MATRIX_SIZE][MATRIX_SIZE];


    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    printf("Matrix Sum:\n");
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
