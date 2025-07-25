#include <stdio.h>
#include <math.h>

int main () {   
    const double PI  = 3.1415926535; // untuk penamaan konstan biasakan menggunakan huruf kapital
    double circle_radius = 0.0;
    // User input 
    printf("\n/////// Halo selamat datang ///////\n\n");

    printf("Tolong masukan nilai jari-jari lingkaran (nilai akan dihitung dalam cm): \n");
    scanf("%lf", &circle_radius);

    

    // CALCULATE CIRCLE AREA 
    double area = PI*(pow(circle_radius, 2));

    // CALCULATE SPHERE SURFACE AREA 
    double surface_area = 4*PI*(pow(circle_radius, 2));

    // CALCULATE SPHERE VOLUME 
    double volume = (4.0/3.0)*PI*(pow(circle_radius, 3));


    printf("Luas lingkaran tersebut adalah: %.2lfcm\n", area);
    printf("Luas permukaan bola tersebut adalah: %.2lfcm", surface_area);
    printf("\nVolume dari bola tersebut adalah: %.2lfcm", volume);

    return 0;
}