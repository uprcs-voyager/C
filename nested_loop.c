#include <stdio.h>

int main () {


    for (int i = 1; i < 5; i++)
    {
        printf("\n");
        for (int j = 1; j < 10; j++)
    {
        printf("%d ", j);
    }
    }

    printf("\n");
    printf("\n");

    // Multiplication table 

    for(int i = 1; i<6; i++) {
        printf("\n");
        for (int j = 1; j < 11; j++)
        {
            int first_number = i;
            int second_number = j;
            int multiple = i*j;
            printf("%d X %d = %d\n",first_number,second_number, multiple);
        }
        
    }

    printf("\n");
    printf("\n");

    // making rectangle using user input 
    int baris;
    int kolom;
    char user_input = '\0';

    printf("\nHaloo selamat datang\n");
    printf("\nTolong masukan Symbol yang ingin anda gunakan: ");
    scanf(" %c", &user_input);
    printf("Tolong masukan jumlah baris yang anda mau (masukan dalam bentuk angka): ");
    scanf("%d", &baris);
    printf("Tolong masukan jumlah kolom yang anda mau (masukan dalam bentuk angka): ");
    scanf("%d", &kolom);

    for (int i = 0; i <= baris; i++)
    {  
        printf("\n");
        for (int j = 0; j<=kolom; j++) {
            printf("%c",user_input);
        }
        
    }
    
    


    
    





    return 0;
}