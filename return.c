#include <stdio.h>
#include <stdbool.h>

double cube (double num){
    return num*num*num;
}

int square (int num) {

    int result = num*num;
    return result;
}

bool CheckAge (int UserAge) {
     if(UserAge >= 18) {
        return true;
     } else {
        return false;
     }
}



int main () {

    printf("\n/// this is a squared number ///");
    int x = square(2);
    int y = square(3);
    int z = square(4);
    printf("\n%d\n%d\n%d\n", x,y,z);
    
    printf("\n/// this is a cubed number ///");
    double i = cube(2);
    double o = cube(3);
    double p = cube(4);
    printf("\n%lf\n%lf\n%lf", i,o,p);

    int UserAge;
    printf("\n\nHalo tolong masukan umur anda (dalam angka): ");
    scanf("%d", &UserAge);
    if(CheckAge(UserAge)) {
        printf("\nOke kamu boleh buat KTP");
    } else if (!CheckAge(UserAge)) {
        printf("\nGo back home");
    }
    

    return 0;
}