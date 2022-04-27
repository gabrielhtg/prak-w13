#include <stdio.h>

// latihan array statis multidimensi : mengisi dengan assignment, menulis
int main () {
    // defenisi matriks dan isi dengan agregat
    int tab [3][4] =    {
                            {1,2,3,4},
                            {2,3,4,5},
                            {3,4,5,6},
                        };
    
    int i;  // indeks baris
    int j;  // indeks kolom

    // program
    printf("Print matrix 3x4\n");

    // transversal : print
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("i,j=%d,%d tab[i,j]=%d\n", i, j, tab[i][j]);
        }
    }
    return 0;
}
