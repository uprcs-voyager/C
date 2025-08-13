#include <stdio.h>
//VARIABLES SCOPE

int add (int x, int y) {
    int result = x+y;
    return result;
}

int subtract (int x, int y) {
    int result = x-y;
    return result;
}


// sebuah variable dapat memiliki nama yang sama, ASALKAN mereka berada pada variable scope {} yang berbeda 
// sebuah function tidak dapat melihat ke dalam function yang lain 

int main () {
    int result = subtract(4, 6);
    printf("%d", result);



    return 0; 
}