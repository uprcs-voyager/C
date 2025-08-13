// FOR LOOP
// mengulangi pengulangan kode dengan jumlah terbatas

// for loop  = for(initialization; Condition; Update) 

#include <stdio.h>
#include <Windows.h>

int main () {

    // for (int i = 0; i <=1000000; i++)
    // {
    //         printf("\n%d", i);   
    // }
    
    // New year countdown 
    for (int i = 10; i >= 0; i--)
    {
        printf("\n%d", i);
        Sleep(1000);
    } printf("\nHappy New Year!!!");
    


    return 0;
}