#include <stdio.h>

int main() {
    // Variabel untuk menyimpan input
    char kode[20], jenis;
    float harga, hargaSetelahDiskon;

    // Input kode barang, jenis, dan harga
    printf("Masukkan kode barang: ");
    scanf("%s", kode);
    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);  // Menggunakan ' ' untuk menghindari masalah membaca karakter newline
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    // Menghitung harga setelah diskon berdasarkan jenis
    switch (jenis) {
        case 'A':
        case 'a':
            hargaSetelahDiskon = harga * (1 - 0.10);  // Diskon 10% untuk jenis A
            break;
        case 'B':
        case 'b':
            hargaSetelahDiskon = harga * (1 - 0.15);  // Diskon 15% untuk jenis B
            break;
        case 'C':
        case 'c':
            hargaSetelahDiskon = harga * (1 - 0.20);  // Diskon 20% untuk jenis C
            break;
        default:
            printf("Jenis barang tidak valid!\n");
            return 1;  // Keluar dari program dengan kode kesalahan
    }

    // Menampilkan hasil
    printf("Kode barang: %s\n", kode);
    printf("Jenis barang: %c\n", jenis);
    printf("Harga sebelum diskon: %.2f\n", harga);
    printf("Harga setelah diskon: %.2f\n", hargaSetelahDiskon);

    return 0;
}

