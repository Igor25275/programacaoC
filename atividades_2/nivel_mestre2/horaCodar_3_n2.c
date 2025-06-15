#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Numero entre 1 e 100

    // iniciar jogo
    printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Voce deve escolher um numero e um tipo de comparacao!\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparacao: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Voce escolheu a opcao Maior.\n");
        resultado = numeroJogador >  numeroComputador ? 1: 0;
        break;
    case 'N':
    case 'n':
        printf("Voce escolheu a opcao Menor.\n");
        resultado = numeroJogador < numeroComputador ? 1: 0;
        break;
    case 'I':
    case 'i':
        printf("Voce escolheu a opcao Igual.\n");
        resultado = numeroJogador == numeroComputador ? 1: 0;
        break;
    
    default:
        printf("Opcao de jogo invalida!\n");
        break;
    }

    printf("O numero do computador e: %d\n", numeroComputador);
    printf("O numero do Jogador e: %d\n", numeroJogador);

    if (resultado == 1)
    {
        printf("Parabens, Voce venceu.\n");
    }else{
        printf("Infelizmente, Voce perdeu.\n");
    }
    






    return 0;
}







