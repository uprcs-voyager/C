#include <stdio.h>
#include <math.h>

int main () {   
    const double PI  = 3.1415926535; // untuk penamaan konstan biasakan menggunakan huruf kapital
    double circle_radius = 0.0;

    // CALCULATE CIRCLE AREA 
    double area = PI*(pow(circle_radius, 2));

    // CALCULATE SPHERE SURFACE AREA 
    double surface_area = 4*PI*(pow(circle_radius, 2));

    // CALCULATE SPHERE VOLUME 
    double volume = (4.0/3.0)*PI*(pow(circle_radius, 3));

    // User input 
    printf("\n/////// Halo selamat datang ///////\n\n");

    printf("Tolong masukan nilai jari-jari lingkaran: ");
    scanf("%lf", &circle_radius);

    printf("")

    return 0;
}