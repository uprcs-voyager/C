#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);
int checkPassword();


int main (bool condition) {
    checkPassword();
    if ( condition == true)
    {
        /* code */
    }
    

    return 0;
}   

int checkPassword () {
    int pass;
    
    do
    {
    printf("\n***** Selamat datang di bank AKRONIM *****\n\n");
    printf("Sebelum melanjutkan Tolong masukan password angka anda (5 digit)");
    scanf("%d", &pass);
        if(pass == 12345) {
            bool condition = true;
        } else {
            printf("\nPassword anda salah");
        }
    } while (pass != 12345);
    


}