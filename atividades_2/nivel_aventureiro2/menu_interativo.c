#include <stdio.h>

int main(){

    int opcao;

    printf("Menu principal.\n");
    printf("1 - Iniciar jogo.\n");\
    printf("2 - Ver regras.\n");
    printf("3 - Sair.\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Execucao do jogo.\n");
        break;
    case 2:
        printf("Regras do jogo sao .......\n");
        break;
    case 3:
        printf("Sair do jogo.\n");
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
    
    
    

    




    return 0;
}