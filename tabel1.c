#include <stdio.h>
#include <stdlib.h>

// latihan array dinamik. Ukuran tabel ditentukan dari pembacaan

int main () {
    // Kamus
    // Defenisi tabel integer
    int *tab;   // deklarasi array; perhatikan tanpa komentar
                // belum tampak bedanya dengan pointer ke integer biasa
    int N;

    // Defenisi indeks
    int i;

    // Program
    printf("Contoh mengisi array dimanik berukuran 0..N : \n");
    printf(" N = ");
    scanf("%d", &N);

    printf("Alokasi setelah mengetahui ukuran tabel \n");
    tab = (int*) malloc((N - 1)* sizeof(int)); // alokasi: ukuran!

    if (tab != NULL) {
        // mendefenisikan elemen tabel
        for (i = 0; i <= N; i++) {
            *(tab + i) = i;
            printf("i=%d tab[i]=%d\n", i, *(tab + i));
        }

        printf("Akhir program\n");

        // dealloc
        free (tab); // dealokasi
        return 0;
    }

    else {
        printf("Alokasi gagal ...\n");
        return 1;
    }

    
} 
