#include <stdio.h>

int main () {
    // OPERATOR ARITMATIKA 
    // = + - * / % ++ --
    
    int x = 2;
    int y = 3;

    // int z akan digunakan untuk menyimpan hasil aritmatika pada int x dan y
    int z = 0; 

    // ini merupakan penambahan
    // z = x+y;
    // printf("\n%d", z);

    // ini merupakan pengurangan
    // z = x-y;
    // printf("\n%d", z);

    // ini merupakan perkalian 
    // z = x*y;
    // printf("\n%d", z);

    // selanjutnya adalah pembagian, operasi pembagian akan lumayan aneh ketika bekerja pada tipe data int
    z = x / y;
    printf("\n%d", z);
    printf("\nHasil yang keluar pada terminal menunjukan 0, padahal hasil pembagian dari\n2/3 adalah 0.66666....\n");
    printf("\nhal tersebut adalah karena int tidak dapat menyimpan koma, maka dari itu\njika sebuah int dibagi dengan sebuah float/selain int lain, hasil yang didapatkan baru akan sesuai");
    printf("\nberikut adalah contohnya, pembagian variable r (int) dengan e (float)\n");

 int r = 2;
 float e = 3;
 float f = 0;

 f = r/e;
 printf("\n%f", f);
 printf("\n\nvariable r adalah int\nvariable e adalah float\n");
    


    return 0;
}