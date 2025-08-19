#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>


int main () {
    /*
    Pseudo random  = Appear random but are determined by a mathematical formula that used a seed value to 
                     generate a predictable sequence of numbers

                     Terlihat acak tetapi di tentukan oleh sebuah rumus matematika yang menggunakan seed value
                     untuk menghasilkan rangkaian angka yang terprediksi    

                     advanced ways to do it : using marsenne Twister or /dev/random
    */


srand(time(NULL));

int min = 50;
int max = 100;

int randomNumber1 = (rand() % (max-min)+1) + min; // +1 artinya menambahkan offset
int randomNumber2 = (rand() % (max-min)+1) + min;
int randomNumber3 = (rand() % (max-min)+1) + min; // this is the formula to generate pseudo random number


printf("%d %d %d", randomNumber1, randomNumber2, randomNumber3);





    return 0;
}