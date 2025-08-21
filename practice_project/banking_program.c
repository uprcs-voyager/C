#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);
int checkPassword();


int main (int condition) {
    int passwordCorrect =  checkPassword();
   
    int choice;
    if ( passwordCorrect == 1)
    {
        do
        {
        printf("\n\nSilahkan pilih opsi di bawah ini\n");
        printf("1. Cek Saldo Bank\n");
        printf("2. Deposit Uang\n");
        printf("3. Ambil Uang Dari Tabungan\n");
        printf("Masukan pilihan anda dalam bentuk angka: ");
        scanf("%d", &choice);
        } while (choice < 1 || choice > 3);
    }
    

    return 0;
}   

int checkPassword () {
    int pass;
    do
    {
    printf("\n***** Selamat datang di bank AKRONIM *****\n\n");
    printf("Sebelum melanjutkan Tolong masukan password angka anda (5 digit)");
    scanf("%d", &pass);
        if(pass ==12345) {
           return 1;
        } else {
            printf("\nPassword anda salah");
        }
    } while (pass != 12345);
    


}