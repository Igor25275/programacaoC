#include <stdio.h>

/*
    incremento (++)
    pré incremento (++a)
    pós decremento (a++)

    decremento (--)
    pré decremento (--a)
    pós decremento (a--)

*/

int main(){

    int numero = 1, num = 1, resultado;


    printf("Pré incremento: %d\n", numero);

    // numero = numero +1;
    // numero += 1
    numero++;

    printf("Pós incremento: %d\n", numero);

    // numero = numero -1;
    // numero -=1
    numero--;

    printf("Pós decremento: %d\n", numero);

    resultado = num++;
    printf("Após Pós-incremento - numero: %d - resultado: %d\n", num, resultado);
    
    resultado = ++num;
    printf("Após Pré-incremento - numero: %d - resultado: %d\n", num, resultado);

    resultado = num--;
    printf("Após Pós-decremento - numero: %d - resultado: %d\n", num, resultado);
    
    resultado = --num;
    printf("Após Pré-decremento - numero: %d - resultado: %d\n", num, resultado);

    


    return 0;
}