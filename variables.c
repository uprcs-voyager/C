#include <stdio.h>

int main () {
    // integer dengan data tipe int ( integer ), gunakan integer jika angka adalah bilangan bulat
    int age = 25;
    // jika ingin menampilkan nilai suatu intger gunakan format specifier
    // dalam kasus integer tipe int, gunakan %d
    printf("Ini adalah int ( integer ) ///// \nUmurmu adalah %d tahun\n\n", age);

    // jika angka merupakan bentuk decimal, gunakan variable float
    float gpa = 3.7;
    // gunakan format specifier %f untuk variale float
    printf("Ini adalah float /////\nnilai gpa anda adalah %f, selamat!!\n\n", gpa);

    // jika butuh presisi lebih tinggi pada angka, gunakan variable double 
    double pi = 3.1415926535897;
    // gunakan format specifier %lf untuk variable double 
    printf("Ini adalah double /////\nnilai pi = %lf\n\n", pi);


    // variable juga dapat digunakan untuk menyimpan karakter
    // gunakan variable char 
    char grade = 'A';
    //gunakan format specifier %c untuk variable tipe char 
    printf("Ini adalah char ( character ) /////\nNilai mu adalah : %c\n", grade);

    return 0;
}