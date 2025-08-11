//PROGRAM KONVERSI SUHU DALAM C

#include <stdio.h>
#include <math.h>

int main () {
    char choice = '/0';
    char choice2 = '/0';
    printf("\n/// Selamat datang di program konversi suhu ///");
    printf("\n1. Celcius (C)\n2. Fahrenheit (F)\n3. Kelvin (K)");
    printf("\nSilahkan Pilih Suhu mana yang anda ingin konversikan (contoh: K): ");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c') {
        float suhu_celcius;
        char convert_to = '/0';

        printf("\nTolong masukan suhu dalam celcius: ");
        scanf("%f", &suhu_celcius);
        printf("\ningin anda konversikan kemana suhu tersebut?\n1. Fahrenheit (F)\n2. Kelvin(K)\n: ");
        getchar();
        scanf(" %c", &convert_to);
        if (convert_to == 'F'|| convert_to == 'f') {
            float calculate_Celcius_toFahrenheit = (suhu_celcius*9/5) + 32;
            float hasil_fahrenheit = calculate_Celcius_toFahrenheit;
            printf("\nSuhu %.2f Celcius dalam Fahrenheit adalah: %.2f  Fahrenheit", suhu_celcius, hasil_fahrenheit);
        } else {
            printf("INput anda salah");
        }
    } else {
        printf ("yeah yang lain blom selese, Pilih C aja yak");
    }





  



    return 0;
}

