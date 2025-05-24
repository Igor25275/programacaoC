#include <stdio.h>

// Cadastro de alunos

int main(){

    char nome[10];
    int idade, matricula;
    float altura;

    // Pega a informação digitada e guarda na variável
    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Informe sua matricula: \n");
    scanf("%d", &matricula);

    // exibe na tela os dados dos alunos.
    printf("Nome: %s -- Idade: %i anos.\n", nome, idade);
    printf("Altura: %.2fmts.\n", altura);
    printf("N° matricula: %d\n", matricula);


    return 0;
}