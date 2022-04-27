#include <stdio.h>
#include <stdlib.h>

int a, b, i, j, temp;
int **matrixA;
int **matrixB;
int **matrixC;

int **operasi (int a, int b) {
    int** matrix = (int**) malloc (a * sizeof(int *));
    for (i = 0; i < a; i++) {
        matrix[i] = (int*) malloc (b * sizeof(int));
    }

    if (matrix != NULL) {
        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                printf("Masukkan input integer untuk matriks %dx%d : ", i + 1, j + 1);
                scanf("%d", &temp);
                matrix[i][j] = temp;
            }
        }
    }

    return matrix;
}

int main () {
    printf("Masukkan dimensi dari matrix baris x kolom (axb): ");
    scanf("%dx%d", &a, &b);
	printf("\n");

        matrixA = operasi(a, b);
        printf("--------------------------------------------");
        printf("\nMatrix A\n");

        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                printf("    %d ", matrixA[i][j]);
            }
            printf("\n");
        }
        printf("--------------------------------------------\n\n");

        matrixB = operasi(a, b);
        printf("--------------------------------------------");
        printf("\nMatrix B\n");

        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                printf("    %d ", matrixB[i][j]);
            }
            printf("\n");
        }
        printf("--------------------------------------------\n\n");

        printf("--------------------------------------------");
        printf("\nMatrix C = Matrix A + Matrix B\n");
        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                printf("    %d ", matrixA[i][j] + matrixB[i][j]);
            }
            printf("\n");
        }
        printf("--------------------------------------------\n");

    return 0;
}
