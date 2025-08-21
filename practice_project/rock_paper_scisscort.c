#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>


int computerChoice (int randomChoice) {
    switch (randomChoice)
    {
    case 1:
        printf("\nKomputer memilih --> Batu");
        break;
    case 2:
        printf("\nKomputer memilih --> Kertas");
        break;
    case 3:
        printf("\nKomputer memilih --> Gunting");
        break;
    default:
    printf("\Error");
        break;
    }

    return 0;
    
}

int userChoice (int Choice) {

    switch (Choice)
    {
    case 1:
        printf("\aAnda memilih --> Batu");
        break;
    case 2:
        printf("\aAnda memilih --> Kertas");
        break;
    case 3:
        printf("\aAnda memilih --> Gunting");
        break;
    default:
    printf("\Error");
        break;
    }
    return 0;
    
}

void checkTheWinner (int Choice, int randomChoice) {
    if ((Choice == 1 && randomChoice == 3) || (Choice == 2 && randomChoice == 1) || (Choice == 3 && randomChoice == 2))
    {
        printf("\n\n----- Selamat!! anda menang!! -----");
    } else if (Choice == randomChoice) {
        printf("\nSeriiii !!!  ");
    } else {
        printf("\nAnda kalah :( ");
    }
    

}

int main () {
    // computer Choice
    srand(time(NULL));
    int min = 1;
    int max = 3;
    int randomChoice = (rand() % (max - min + 1)) + min;


    // User choice
    int Choice;
    do
    {   
    printf("*** Halo selamat datang di program Batu Kertas Gunting !! ***");
    printf("\n\nSilahkan pilih pilihan anda");
    Sleep(1000);
    printf("\n1. Batu\n");
    Sleep(1000);
    printf("2. kertas\n");
    Sleep(1000);
    printf("3. Gunting\n");
    printf("Masukan Pilihan anda dalam bentuk angka: ");
    scanf("%d", &Choice);
    } while ( Choice < 1 || Choice >3);
    userChoice(Choice);
    computerChoice(randomChoice);
    checkTheWinner(Choice, randomChoice);



    return 0;
}

