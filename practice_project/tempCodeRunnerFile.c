#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void checkBalance(float balance);
void menu(float balance);
float deposit(float balance);
float withdraw(float balance);
int checkPassword();


int main () {
    float balance = '\0';
    int passwordCorrect =  checkPassword();
    if ( passwordCorrect == 1)
    {
       menu(balance);
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
    

    return 0;
}

void menu (float balance) {
    float balance;
    int choice;
    do
        {
        printf("\n\nSilahkan pilih opsi di bawah ini\n");
        printf("1. Cek Saldo Bank\n");
        printf("2. Deposit Uang\n");
        printf("3. Ambil Uang Dari Tabungan\n");
        printf("4. Keluar dari program\n");
        printf("Masukan pilihan anda dalam bentuk angka: ");
        scanf("%d", &choice);
        } while (choice < 1 || choice > 4);
    
    switch (choice)
    {
    case 1:
        checkBalance(balance);
        break;
    case 2:
    {    
        deposit(balance);
    }
    case 3:
        withdraw(balance);
        break;
    
    default:
    printf("\n**Selamat tinggal !!**");
        break;
    }
}




void checkBalance(float balance) { 

    if (balance == 0)
    {
       printf("\nJumlah uang anda saat ini adalah kosong\nHarap melakukan pengisian\n");
       printf("Dengan cara memilih opsi kedua (2), yaitu deposit");
    } else {
        printf("Jumlah uang anda saat ini adalah adalah: Rp.%.0f", balance);        
    }
    
    char choice ='\0';
    printf("\nApakah anda ingin melakukan memilih opsi lain? (Y/N): ");
    scanf(" %c", &choice);
    do
    {
        if ( choice == 'Y' || choice == 'y')
        {
            menu(balance);
        } else if ( choice == 'N' || choice == 'n') {
            printf("\nTerimakasih telah menggunakan layanan bang akronim\nSampai Jumpa lagi :)");
            exit(EXIT_SUCCESS);
        } else {
            printf("\nTolong masukan Input yang valid!! (Y/N): ");
            scanf(" %c", &choice);
        }
        
    } while ( (choice != 'Y' || choice != 'y') || (choice != 'N' || choice != 'n') );
}

float deposit (float balance) {
    float jumlahDeposit;
    do
    {
        printf("\nTolong masukan jumlah uang yang ingin anda masukan ke dalam bank:\n");
        printf("");
        scanf("%f", &jumlahDeposit);
    } while (jumlahDeposit <= 0);
      char again = '\0'; 
        float balance = jumlahDeposit+balance;
        printf("\nDeposit berhasil di lakukan total uang anda sekarang adalah: %f\n", balance);
        printf("Apakah anda ingin melakukan operasi lain? (Y/N): ");
        scanf(" %c", &again);
        if (again == 'Y' || again == 'y')
        {
            menu(balance);
        } else {
            printf("\n\n** Selamat tinggal!! Terimakasih telah menggunakan layanan bank kami **");
        }
     return balance;
}

float withdraw (float jumlahmone) {
    printf("Belum selesai");


    return 0;
}