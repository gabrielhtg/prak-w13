#include <stdio.h>
// File : tabel.c
// Latihan array statis : mengisi dg assignment, menulis

int main () {
    // Kamus
    int i;
    int tab [10]; // Cara mengacu elemen ke-i : tab [i]
    int N;

    // Program
    N = 5;
    printf("Isi dan print tabel untuk indeks 1..5\n");

    // Isi dengan assignment
    for (i = 1; i <= N; i++) {
        tab[i] = i;
    }

    // transversal : print
    for (i = 1; i <= N; i++) {
        printf("i=%d tab[i]=%d \n", i, tab[i]);
    }

    return 0;
}