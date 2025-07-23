#include <stdio.h>
#include <string.h>

int main () {
    // PROGRAM SHOPPING CART
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0; 
    char currency = '$';
    float total = 0.0f;

    printf("\nBarang apa yang ingin kamu beli: ");
    fgets(item, sizeof(item), stdin);

    printf("\nBerapa harga tiap barang: ");
    scanf("%f", &price);

    printf("\nBerapa banyak yang ingin kamu beli: ");
    scanf("%d", &quantity);

    total = price*quantity;
    printf("\nKamu sudah membeli %ssebanyak %d", item, quantity);
    item[strlen(item) - 1] = '\0'; 
    printf("\nTotal harga yang harus anda bayar adalah: %c%.2f", currency, total);



    return 0;
}