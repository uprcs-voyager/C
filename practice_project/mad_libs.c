#include <stdio.h>
#include <string.h>

int main () {
        // MAD LIBS GAME

        char noun[50] = ""; // noun adalah kata benda (orang, tempat atau benda)
        char verb[50] = ""; // verb adalah kata kerja (kata yang menunjukan suatu aksi)
        char adjective1[50] =""; // adjective adalah kata sifat (red car, big house, she is happy)
        char adjective2[50]= ""; // adjective adalah kata sifat (red car, big house, she is happy)
        char adjective3[50]= ""; // adjective adalah kata sifat (red car, big house, she is happy)
        
        printf("\nTolong masukan sebuah adjective (Deskripsi): ");
        getchar();
        fgets(adjective1, sizeof(adjective1), stdin);
        printf("\nTolong masukan sebuah noun(orang, tempat atau benda): ");
        getchar();
        fgets(noun, sizeof(noun), stdin);
        printf("\nTolong masukan sebuah adjective kedua (Deskripsi): ");
        getchar();
        fgets(adjective2, sizeof(adjective2), stdin);



    return 0;
}