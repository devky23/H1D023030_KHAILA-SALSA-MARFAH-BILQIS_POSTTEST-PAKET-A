#include <stdio.h>

int main() {
    // Definisikan Array dan pointer yang digunakan
    int arr[] = {1, 6, 13, 16, 25, 26};
    int *ptr = arr;

    // Cetak isi array sebelum perubahan
    printf("Daftar Halaman Sebelum Perubahan:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ubah value pada Array
    ptr[2] = 0; // Censored the value at index 2
    ptr[3] = 0; // Censored the value at index 3
    ptr[4] = 0; // Censored the value at index 4

    // Cetak isi array setelah perubahan
    printf("Daftar Halaman Setelah Perubahan:\n");
    for (int i = 0; i < 6; i++) {
        if (i >= 2 && i <= 4) {
            printf("[ CENSORED ] ");
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}