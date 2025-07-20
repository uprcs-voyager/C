#include <stdio.h>
#include <stdbool.h>


int main () {
    // terdapat beberapa karakter yang dapat digunakan untuk meng-format suatu output, optional modifier tersebut adalah (width, precision dan flags)
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("Ini merupakan output yang tidak di format\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    
    // selanjutnya merupakan output yang di format menggunakan width
    // sehingga output yang keluar akan menyesuaikan dengan panjang width yang diberikan
    printf("\n\nIni merupakan output yang di format menggunakan width, dengan nilai width 3\n");
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    // karena nilai 1 dan 10 tidak mencapai width 3, maka nilai yang kurang akan digantikan dengan (space)


    // output yang di format lalu di justify ke kiri dengan menambahkan tanda (-) sebelum format specifier nya
    printf("\n\nIni merupakan output yang di format menggunakan width, dengan nilai width -4 sehingga akan justify ke kiri\n");
    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);

    // output yang di format juga dapat di pre-seed dengan 0
    printf("\n\nIni merupakan output yang di format menggunakan width, dengan nilai width 3 dan di pre-seed dengan 0\n");
    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);


    ////////////// PRECISION /////////////////////
    // selanjutnya adalah output yang di format menggunakan format specifier precision 
    printf("\n\n/// PRECISION ///\n\n");
    printf("default behavior dari C adalah untuk menampilkan 6 digit setelah decimal ketika menampilkan angka floating point\n");
    printf("berikut adalah contoh output float yang belum di format\n");

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
    
    printf("%f\n", price1);
    printf("%f\n", price2);
    printf("%f\n", price3);

    // untuk mengatur berapa banyak digit yang ini di tampilkan tambahkan .(angka) sebelum huruf dari format specifier
    // contoh : "%.2f"

    printf("\nini merupakan output dari tipe data float yang di format menggunakan precision, untuk menampilkan 2 angka setelah titik\n");
    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);
    // ingat output akan di bulatkan dalam case - case tertentu
    //output yang di bulatkan 
    float price4 = 20.99;
    printf("\n%.1f<-- ini seharusnya adalah 20.99 tetepi karena di format agar menampilkan\n1 angka setelah titik. maka output dibulatkan menjadi 21", price4);
    
    // perlu di ingat bahwa width dan precision dapat digunakan secara bersamaan seperi "%0.2f"
     
    return 0;
}