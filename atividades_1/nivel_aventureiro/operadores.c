#include <stdio.h>

/*
    soma (+)
    subtração (-)
    multiplicaçao (*)
    divisão (/)

*/

int main(){

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o número 1: \n");
    scanf("%d", &num1);

    printf("Digite o número 2: \n");
    scanf("%d", &num2);

        // soma
    soma = num1 + num2;

        // subtrai
    subtracao = num1 - num2;

        // multiplica
    multiplicacao = num1 * num2;

        // divide
    divisao = num1 / num2;

    printf("Soma: %d\n", soma);
    printf("Subtraçao: %d\n", subtracao);
    printf("Multiplicaçao: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0;
}