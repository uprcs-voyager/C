// A VERY SIMPLE CALCULATOR

#include <stdio.h>
#include <math.h>

int main () {
    double FirstNumber;
    char Operator;
    double SecondNumber;
    double Result;
    // getting the first number from the user 
    printf("\n/// Halo selamat datang di program kalkulator sederhana ///");
    printf("\nTolong masukan angka pertama: ");
    scanf("%lf", &FirstNumber);

    //getting the operator from user input
    printf("\nOke sekarang tolong pilih operator aritmatika yang ingin anda gunakan");
    printf("\n1. * (Perkalian)\n2. / (Pembagian)\n3. + (Penjumlahan)\n4. - (Pengurangan)\n");
    printf("contoh input (*): ");
    scanf(" %c", &Operator);
    printf("\nTerakhir, Tolong masukan angka kedua: ");
    scanf("%lf", &SecondNumber);


    // calculating
    switch (Operator)
    {
    case '*':
        Result = FirstNumber*SecondNumber;
        printf("Hasil dari perkalian %.2lf dan %.2lf adalah: %.2lf", FirstNumber, SecondNumber, Result);
        break;
    
    case '/':
        if (SecondNumber == 0) {
            char choice = '\0';
            printf("Peringatan Anda Akan membagi dengan nol, Hasil yang didapatkan akan tidak terdefinisi");
            printf("\nApakahh anda tetap ingin melanjutkan? (Y/n): ");
            scanf(" %c", &choice);
            if (choice == 'Y'  || choice == 'y') {
                Result = FirstNumber/SecondNumber;
                printf("Hasil dari pembagian %.2lf dan %.2lf adalah: %.2lf", FirstNumber, SecondNumber, Result);
            } 
            else if (choice == 'n' || choice == 'N'){
                printf("\nTolong jangan Bagi dengan nol");
            } 
        } else {
                Result = FirstNumber/SecondNumber;
                printf("Hasil dari pembagian %.2lf dan %.2lf adalah: %.2lf", FirstNumber, SecondNumber, Result);
                break;
            }
        break;
    
    case '+':
        Result = FirstNumber+SecondNumber;
        printf("Hasil dari penjumlahan %.2lf dan %.2lf adalah: %.2lf", FirstNumber, SecondNumber, Result);
        break;
    
    case '-':
        Result = FirstNumber-SecondNumber;
        printf("Hasil dari pengurangan %.2lf dan %.2lf adalah: %.2lf", FirstNumber, SecondNumber, Result);
        break;

    default:
        printf("\nTolong pilih Operator yang sesuai!");
        break;
    }
    return 0;
}