// FUNCTION
#include <stdio.h>
#include <string.h>

void helloWorld (char name[], int age)  //  <-- untuk menerima data variable yang sudah di kirimkan oleh main(). 
                    // kita perlu menambahkan juga tipe data dan nama variable yang sudah dikirimkan ke dalam ()
                    // name dan age juga dapat diganti.

{
    printf("\nHello world");
    printf("\nHello world!!");
    printf("\nand you are %s right?", name);
    printf("\nHello, nice to meet you %s!, you are %d old this year!!\n", name, age);

}3

int main () {
    // function adalah baris-baris kode yang dapat di 'gunakan' atau di panggil.
    // argumen juga dapat dikirimi ke suatu function agar function tersebut dapat menggunakannya 
    
    char name[100] = "";
    int age;
    printf("\nheyyy, helloo what is your name??: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    printf("\nokkay, how old are you??: ");
    scanf("%d", &age);
    
    // fungsi helloWorld tidak tau tentang variable name dan age, maka dari itu kita harus mengirimkan info tersebut ke fungsi terkait

    helloWorld(name, age);  // <---- pass the name and age variable || the content inside () is called an argument
    


    return 0;
}