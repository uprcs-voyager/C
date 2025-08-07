#include <stdio.h>
#include <string.h>

int main () {

    // example use of if statement
    // determining if a person is an adult (18years old) or not (< 18 years old)
    // int age;
    // printf("\n\nHalo silahkan masukan umur anda (dalam benntuk angka): ");
    // scanf("%d", &age);

    // if (age >= 18 && age <21)  {
    //     printf("You are an adult!! go pay your taxes!!");
    // } else if (age >= 21) {
    //     printf("hello unc");
    // } else if (age < 0) {
    //     printf("WHAT THE FUCK");
    // }
    // else if (age > 0, age <18) {
    //     printf("you are still young!! go back to sleep!!");
    // }

    

    //  another example of if statement usage 
    char nama [100] = "";

    printf("\nhalooo silahkan masukan nama anda: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strlen(nama) - 1] = '\0';

    if (strlen(nama) == 0) {
        printf("tolong masukan nama anda yaa, jangan di kosongkan");
    } else {
        printf("\nselamat pagii %s", nama);
    }




    return 0;
}