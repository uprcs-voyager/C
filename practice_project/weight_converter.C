// weight converter program

#include <stdio.h>

int main () {
    
    printf("\nSelamat datang di program konversi berat.");
    printf("\nSilahkan pilih Berat apa yang ada ingin konversikan contoh (1)");
    printf("\n1. Kilogram ke gram\n2. Kilogram ke miligram");
    
    int pilihan;
    printf("\n\nPilih antara 1 dan 2: ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        float kilogram;
        printf("masukan berat dalam kilogram: ");
        scanf("%f", &kilogram);
        float hasil = kilogram*1000;
        printf("Berat %.1f kilogram jika di konversikan ke gram adalah: %.1f gram", kilogram, hasil);
    } else if (pilihan == 2) {
        float kilogram;
        printf("masukan berat dalam kilogram: ");
        scanf("%f", &kilogram);
        float hasil = kilogram*1000000;
        printf("Berat %.1f kilogram jika di konversikan ke miligram adalah: %.1f miligram", kilogram, hasil);
    } else {
        printf("\nTolong masukan input yang valid");
    }






    return 0;
}