#include <stdio.h>
#include <math.h>


int main () {

    int x = 9;
    x = sqrt(x); // fungsi akar kuadrat 

    int y = 2;
    y = pow(y, 3); // fungsi pangkat, y adalah angkanya dan 2 adalah besar pangkatnya 
    
    float z = 3.14;
    z = round(z); // fungsi yang digunakan untuk membulatkan suatu nilai
    // gunakan ceil untuk membulatkan ke atas (4.000), gunakan floor untuk membulatkan kebawah (3.00)

    int v = -12;
    v = abs(v); // fungsi absolut, fungsi ini akan mengubah nilai menjadi positif

    float n = 4;
    n = log(n); // fungsi log
    
    /// terdapat juga fungsi trigonometri, sin, cos, tan ///////////////

    printf("\nFungsi Akar kuadrat (sqrt)\n%d", x);
    printf("\nFungsi Akar pangkat (pow)\n%d", y);
    printf("\nFungsi dibulatkan ( round )\n%f", z);
    printf("\nFungsi absolut (abs) \n%d", v);
    printf("\nFungsi Logaritma (log) \n%f", n);


    return 0; 
}