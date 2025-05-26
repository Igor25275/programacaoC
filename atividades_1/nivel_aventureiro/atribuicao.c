#include <stdio.h>

/*
    Operadores de atribuição

    operador simples (=)
    operador com soma (+=)
    operador com subtração (-=)
    operador com multiplicação (*=)
    operador com divisão (/=)

*/

int main(){

    int num1 = 10, resultado = 10;

        // resultado = resultado + 10
    resultado += 10;
    printf("Resultado: %d\n", resultado);

        // resultado = resultado - num1
    resultado -= num1;
    printf("Resultado: %d\n", resultado);

        // resultado = resultado * 5
    resultado *= 5;
    printf("Resultado: %d\n", resultado);

        // resultado = resultado / 2
    resultado /= 2;
    printf("Resultado: %d\n", resultado);
    
    return 0;
}