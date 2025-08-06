// KALKULATOR BUNGA MAJEMUK

#include <stdio.h>
#include <math.h>


int main () {

    // preparing the data
    float modal_awal;
    float bunga;
    float periode;

    //getting the input from user 
    printf("///// kalkulator bunga majemuk /////\n\n");
    printf("Berapa modal awal anda? (Ketik dalam bentuk angka)\nContoh (250000): ");
    scanf("%f", &modal_awal);
    // printf("modal awal anda adalah: %.1f", modal_awal); debugging
    printf("\nBerapa persentase bunga anda? (persentase bunga per tahun): ");
    scanf("%f", &bunga);
    printf("\nPertanyaan terakhir, berapa lama periodenya? (berapa tahun): ");
    scanf("%f", &periode);
    
    // calculating the compound interest
    float persentase_bunga = bunga/100;
    float bunga_majemuk = modal_awal*(pow(1+persentase_bunga, periode));

    // debugging persentase bunga 
    // float persentase_bunga = bunga/100;
    // printf("persentase bunga anda adalah: %.2f%", persentase_bunga);4


    // output 
    printf("Jadi modal awal anda setelah %.0f tahun adalah: %.2f", periode, bunga_majemuk);




    return 0;
}