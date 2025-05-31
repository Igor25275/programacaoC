#include <stdio.h>

int main(){

    short int numeroPequeno = 32767; // valor máximo de short int
    printf("Número pequeno (short int) %d\n", numeroPequeno);


    numeroPequeno = 32768; // valor maior que o máximo de short int 
    printf("Número pequeno atualizado (short int) %d\n", numeroPequeno);


    // usa 2 bytes 


    return 0;
}