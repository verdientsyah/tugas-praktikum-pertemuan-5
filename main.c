#include <stdio.h>

int hitung_lama_bekerja(int jam_masuk, int jam_pulang) {
    // Pastikan jam_masuk dan jam_pulang dalam rentang 1-12
    if (jam_masuk < 1 || jam_masuk > 12 || jam_pulang < 1 || jam_pulang > 12) {
        printf("Jam masuk dan jam pulang harus antara 1 hingga 12.\n");
        return -1; // Menandakan input tidak valid
    }

    // Jika jam pulang lebih besar atau sama dengan jam masuk
    if (jam_pulang >= jam_masuk) {
        return jam_pulang - jam_masuk;
    } else {
        // Jika jam pulang lebih kecil dari jam masuk, artinya lewat tengah hari
        return (12 - jam_masuk) + jam_pulang;
    }
}

int main() {
    int jam_masuk, jam_pulang;
    
    // Input jam masuk dan jam pulang
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam pulang (1-12): ");
    scanf("%d", &jam_pulang);
    
    // Menghitung lama bekerja
    int lama_bekerja = hitung_lama_bekerja(jam_masuk, jam_pulang);
    
    if (lama_bekerja != -1) {
        // Menampilkan lama bekerja jika input valid
        printf("Lama bekerja pegawai adalah %d jam.\n", lama_bekerja);
    }
    
    return 0;
}

