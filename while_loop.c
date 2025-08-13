// WHILE LOOP
// Terus menjalankan suatu kode jika suatu kondisi terpenuhi atau bernilai true 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {

    // int number = 0;
    // int number2 = 0;
    

    // while (number <= 100)
    // {
    //     number++;
    //     printf("Probowo TOLOL");
    // }

    // do {
    // printf("\nTolong masukan angka yang lebih besar dari 0");
    // scanf("%d", &number2);
    // } while (number2 < 0);
    
    
    // char name[50] = "";
    // printf("\nHalo tolong masukan nama anda: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name)-1] = '\0';

    // while (strlen(name) == 0) {
    // printf("\n Nama tidak boleh kosong, tolong masukan nama anda: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name)-1] = '\0';
    // } 
    // printf("\nHalo, selamat datang %s", name);

    bool IsRunning = true;
    char response = '\0';

    while (IsRunning) {
        printf("\nKamu sedang memainkan sebuah permainan, apakah kamu ingin melanjutkan?");
        printf("\n(Y = Yes, N = no): ");
        scanf(" %c", &response);
         if(response == 'Y' || response == 'y'){
            IsRunning = true;
         } else {
            IsRunning = false;
         }

    }


    return 0;
}