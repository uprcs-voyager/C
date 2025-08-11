//SWITCHES IN C

#include <stdio.h>


int main () {
    // switch, switch digunakan sebagai alternatif dari menggunakan banyak if-else statements. Lebih efisien menggunakan
    // nilai integer yang static
    
    int DayOfTheWeek;
    printf("Please enter the day of the week (1-7): ");
    scanf("%d", &DayOfTheWeek);

        switch (DayOfTheWeek) {
            case 1: 
                printf("\nMonday, MONDAYYY ITS MONDAYYYY AAAAAAAAA :(");
                break;
            case 2: 
                printf("\nits tuesday");
                break;
            case 3: 
                printf("\nwedensday");
                break;
            case 4: 
                printf("\nthursdays");
                break;
            case 5: 
                printf("\nFriay");
                break;
            case 6: 
                printf("\nSaturday");
                break;
            case 7: 
                printf("\nSydnay");
                break;
            default:
            printf("whats that day boyo");
                
        }




    return 0;
}