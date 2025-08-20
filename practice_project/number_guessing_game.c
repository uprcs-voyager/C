#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>


int main () {

    srand(time(NULL));

    int min = 1;
    int max = 100;
    int guess = 0;
    int attempt = 0;
    int answer = rand() % (max - min + 1 ) + min;

    Sleep(1000);
    printf("\n*** Haloo selamat datang di game tebak angka ***");
    printf("\n.");
    Sleep(2000);
    printf("\n.");
    Sleep(2000);
    printf("\n.");
    printf("\n\nKomputer sudah menentukan angka (1-100) !!\n");



    do {
         printf("Coba tebak angka berapa yang sudah di tentukan (masukan dalam bentuk angka): ");
         scanf("%d", &guess);
         attempt++;

      if(guess < answer) {
            printf("\nJawaban anda terlalu rendah!!\n");
        }  else if (guess > answer) {
                printf("\nJawaban anda terlalu Tinggi!!\n");
            } 
        else {
             printf("\nSelamat!!!\njawaban anda %d benar!! angka yang benar adalah: %d", guess, answer);
        }}
    while (guess != answer);
            printf("\n\nAngka yang benar = %d", answer);
            printf("\njumlah percobaan yang anda lakukan adalah = %d", attempt);
        

    
    






    return 0;
}