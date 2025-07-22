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

    return 0;
}