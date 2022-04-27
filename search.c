#include <stdio.h>
#include<stdlib.h>

int sentinel (int *T, int N, int X) {
    int i = 0;
    int IX;

    while ((i < N) && (T[i] != X)) i++;
    
    if (T[i] == X) IX = i; // lokasi ditemukan.
    else IX = -99;
        
    return IX;
}

int main () {
    // KAMUS
    int T[] = {1, 3, 5, 7, 9, 10, 12};
    int i, X, a;

    // ALGORITMA
    printf("Masukkan data yang dicari : "); scanf("%d", &X);
    a = sentinel(T, 7, X);
    
    if (a == -99) {
        printf("Data tidak ditemukan.\n");
    }

    else {
        printf("Data ditemukan.\n");
        printf("Lokasi elemen %d\n", a);
    }

    return 0;
}
