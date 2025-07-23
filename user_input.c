#include <stdio.h>

int main () {

    printf("\nHello");
    // tidak apa-apa membuat variable tetapi tidak meng-assign suatu value ke mereka
    //namun ingat jangan gunakan variable tersebut sebelum value di assign

    // int age;
    // float gpa;
    // char grade;
    // char name[30]; //  <-- char name akan memiliki maksimal 30 karakter/30byte
    // saat semua variable diatas di print, mereka akan memberikan output undifined behavior
    // maka langkah yang lebih baik adalah meng-assing suatu value placeholder untuk variable-variable tersebut


    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // <-- '\0' merupakan null terminator
    char name[30] = "";

    // MENGAMBIL USER INPUT 
    printf("\nSilahkan masukan umur anda: "); //<-- meng-preseed fungsi scanf menggunakan printf agar user tahu apa yang harus dimasukan 
    scanf("%d", &age); // <-- "%d" (mengdeklarasikan tipe data variable), &age (memberitahu dimana data tersebut harus disimpan)
    printf("Silahkan masukan GPA anda: ");
    scanf("%f", &gpa);
    printf("silahkan masukan grade anda (masukan dalam bentuk huruf): "); // <-- user tidak akan memiliki kesempatan untuk mengisi variable grade karena input buffer yang dimana scanf sudah membaca newline sebagai input baru
    scanf(" %c", &grade); // <-- shortcut yang dapat digunakan adalah menambahkan spasi sebelum %c
    printf("Terakhir tolong masukan nama anda: ");
    scanf("%s",&name);

    // MENAMNPILKAN USER INPUT
    printf("\n\nUmur anda adalah: %d", age);
    printf("\nGPA anda adalah: %.2f", gpa);
    printf("\nGrade anda adalah: %c", grade);
    printf("\nNama anda adalah: %s", name);

    return 0;
}