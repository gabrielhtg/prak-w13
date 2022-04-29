#include <stdio.h>
#include<stdlib.h>

int sentinel (int *T, int N, int X) {
    int i = 0;
    int IX;
    
    while (T[i] != X && i <= N) {
        i++; 
    }

    if (i < (N + 1)) {
        IX = i;
    }

    else if (i == (N + 1)){
        IX = 0;
    }
    
    return IX;
}

int main () {
    // KAMUS
    int T[] = {1, 3, 5, 7, 9, 10, 12};
    int i, X, a;


    // ALGORITMA
    printf("Masukkan data yang dicari : "); scanf("%d", &X);
    a = sentinel(T, 7, X);
    
    if ((a == 0 || X == 0) && X != 1) {
        printf("Data tidak ditemukan.\n");
    }

    else if (a == 0 && X == 1) {\
        printf("Data ditemukan.\n");
        printf("Lokasi elemen %d\n", a);
    }

    else {
        printf("Data ditemukan.\n");
        printf("Lokasi elemen %d\n", a);
    }

    return 0;
}
