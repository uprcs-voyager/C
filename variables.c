#include <stdio.h>

int main () {
    // integer dengan data tipe int ( integer ), gunakan integer jika angka adalah bilangan bulat
    int age = 25;
    // jika ingin menampilkan nilai suatu intger gunakan format specifier
    // dalam kasus integer tipe int, gunakan %d
    printf("Umurmu adalah %d tahun", age);

    // jika angka merupakan bentuk decimal, gunakan variable float
    float gpa = 3.7;
    // gunakan format specifier %f untuk variale float
    printf("\nnilai gpa anda adalah %f, selamat!!", gpa);

    return 0;
}