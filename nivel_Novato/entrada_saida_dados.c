#include <stdio.h>

// Saída de dados na tela: printf("texto com formatação", variavel, variavel);

/*
    %d: imprime um inteiro no formato decimal
    %i: equivalente a %d
    %f: imprime um número de ponto flutuante no formato padrão
    %e: imprime um número de ponto flutuante na notação cientifíca 
    %c: imprime um único caractere
    %s: imprime uma cadeia (string) de caracteres

*/

/*
int main(){

    char nome[7] = "Igor";
    int idade = 27;
    float altura = 1.74;
    char opcao = 'S';

    printf("O nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Opção: %c\n", opcao);



    return 0;
}

*/

// Solicita dados do usúario: scanf("formato1", &variavel1)

int main(){

    char nome[7];
    int idade;
    float altura;
    char opcao;


    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Dgite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);

    return 0;

}