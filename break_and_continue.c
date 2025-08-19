// break and continue
// break digunakan untuk mengentikan suatu case, perulangan dll
// sedangkan continue digunakan untuk meng skip 

#include <stdio.h>

int ThisBreak() {
    
    for (int i = 10; i >= 0; i--)
    {
        printf("\n%d", i);
        if (i == 5 ) {
            break;
        }
    }
}


int ThisContinue() {
    
    for (int i = 10; i >= 0; i--)
    {
        if (i == 5 ) {
            continue;;
        }
        printf("\n%d", i);
    }
}


int main () {

    printf("\nThis is break");
    ThisBreak();

    printf("\n\nThis is continue");
    ThisContinue();



    return 0;
}