#include <stdio.h>
#include <stdlib.h>

int **matrixA, **matrixB, **matrixC;
int i, j, temp;

int **operasi (int a, int b) {
    int **matrix = (int **) malloc (a *sizeof(int*)); // dialokasikan baris matrix sebanyak a
    for (i = 0; i < a; i++) {
        matrix[i] = (int *) malloc (b *sizeof(int));
    } 

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("Masukkan input untuk lokasi matrix %dx%d : ", i + 1, j + 1);
            scanf("%d", &temp);
            matrix[i][j] = temp;
        }
    }

    return matrix;
}

void kuning () {
    printf("\033[1;33m");
}

void biru () {
    printf("\033[1;34m");
}

void merah () {
    printf("\033[0;31m");
}

void cyan () {
    printf("\033[0;36m");
}

void reset () {
    printf("\033[0m");
}

int main () {
    int a, b;

    printf("Halo selamat datang pada program ini.\n");
    printf("Contoh : 2x2.\n");
	printf("Masukkan dimensi dari matriks sesuai contoh di atas : ");
	scanf("%dx%d", &a, &b);
	printf("\n");
    
    biru();
    printf("---------------------------------------------\n");
    kuning();
    printf("                Matrix A\n"); 
    biru();
    printf("---------------------------------------------\n");
    reset();
    matrixA = operasi(a, b);
    
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("   %d", matrixA[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
   
    biru();
    printf("---------------------------------------------\n");
    kuning();
    printf("                Matrix B\n"); 
    biru();
    printf("---------------------------------------------\n");
    reset();
    matrixB = operasi(a, b);
    
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("   %d", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    biru();
    printf("---------------------------------------------\n");
    kuning();
    printf("                Matrix C\n"); 
    biru();
    printf("---------------------------------------------\n");
    reset();
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("   %d", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }

    return 0;
}


