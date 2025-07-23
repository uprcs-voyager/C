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
        fgets(adjective1, sizeof(adjective1), stdin);
        adjective1[strlen(adjective1)-1] = '\0';

        printf("\nTolong masukan sebuah noun(orang, tempat atau benda): ");
        fgets(noun, sizeof(noun), stdin);
        noun[strlen(noun)-1] = '\0';

        printf("\nTolong masukan sebuah adjective kedua (Deskripsi): ");
        fgets(adjective2, sizeof(adjective2), stdin);
        adjective2[strlen(adjective2)-1] = '\0';

        printf("\nTolong masukan sebuah verb (kata kerja) dengan akhiran -ing: ");
        fgets(verb, sizeof(verb), stdin);
        verb[strlen(verb)-1] = '\0';

        printf("Tolong masukan sebuah adjective ketiga (deskripsi): ");
        fgets(adjective3, sizeof(adjective3), stdin);
        adjective3[strlen(adjective3)-1] = '\0';



        // TESTING THE VARIABLES
        // printf("\n%s\n", noun);
        // printf("%s\n", verb);
        // printf("%s\n", adjective1);
        // printf("%s\n", adjective2);
        // printf("%s\n", adjective3);

        // da sentence
        // hari ini saya pergi ke sebuah akuarium ( adjective)
        // disana saya melihat sebuah (noun)
        // (noun) adalah (adjective) dan (verb)
        // saya (adjective3)!!

        printf("\n\nToday i went to a %s aquarium ", adjective1);
        printf("\nThere i see %s", noun);
        printf("\n%s is %s and %s", noun, adjective2, verb);
        printf("\nI'm %s!!",adjective3);

    return 0;
}