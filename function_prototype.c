#include <stdbool.h>
#include <stdio.h>
// FUNCTION PROTOTYPE 
/*
Function prototype berguna untuk memberitahu compiler mengenai informasi tentang suatu fungsi sebelum benar - benar
Di definisikan. Kode c dibaca dari atas ke bawah, sehingga suatu fungsi tidak dapat digunakan dalam function main
jika tata letaknya berada di bawah function main. Tujuan Function prototype adalah untuk memberitahu kepada kompiler
bahwa terdapat function yang dapat digunakan. Refer to below example
*/ 

// berikut adalah function prototype
void hello (char name[], int age);
bool AgeCheck(int age);



int main () {
    hello("Spongebob", 30);    
    
    if(AgeCheck(30)) {
        return printf("\nOke anda boleh bekerja disini");
    } else {
        return printf("\nKembali ke sekolah ya dek");
    }

    return 0;
}

// tanpa mengganakan function prototype, function main tidak akan tau ada fungsi hello, karena compiler membaca program c
// dari atas ke bawah, maka dari itu kita menggunakan function prototype
void hello (char name[], int age) {
    printf("\nHalo %s", name);
    printf("\nUmur kamu adalah %d tahun", age);
} 

bool AgeCheck (int age) {
    if (age >= 16) {
        return true;
    } else {
        return false;
    }
}