#include <stdio.h>

int main() {
    int jamMasuk, menitMasuk, jamKeluar, menitKeluar;
    int totalMenitMasuk, totalMenitKeluar, durasiParkir, biayaParkir;
    
    // Input waktu masuk
    printf("Masukkan jam masuk (0-23): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan menit masuk (0-59): ");
    scanf("%d", &menitMasuk);

    // Input waktu keluar
    printf("Masukkan jam keluar (0-23): ");
    scanf("%d", &jamKeluar);
    printf("Masukkan menit keluar (0-59): ");
    scanf("%d", &menitKeluar);
    
    // Menghitung total menit untuk waktu masuk dan keluar
    totalMenitMasuk = jamMasuk * 60 + menitMasuk;
    totalMenitKeluar = jamKeluar * 60 + menitKeluar;

    // Jika waktu keluar lebih kecil dari waktu masuk, anggap keluar pada hari berikutnya
    if (totalMenitKeluar < totalMenitMasuk) {
        totalMenitKeluar += 24 * 60;  // Menambahkan 24 jam (1440 menit)
    }

    // Durasi parkir dalam menit
    durasiParkir = totalMenitKeluar - totalMenitMasuk;

    // Menghitung biaya parkir
    if (durasiParkir <= 120) {
        biayaParkir = 2000;  // 2 jam pertama
    } else {
        // 2 jam pertama dikenakan 2000, sisanya per jam 500
        int jamTambahan = (durasiParkir - 120 + 59) / 60;  // Membulatkan ke atas untuk jam tambahan
        biayaParkir = 2000 + jamTambahan * 500;
    }

    // Menampilkan hasil
    printf("Durasi parkir: %d menit\n", durasiParkir);
    printf("Biaya parkir: %d\n", biayaParkir);

    return 0;
}

