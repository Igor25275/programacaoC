#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao, numero_secreto, palpite;

    printf("Menu principal.\n");
    printf("1 - Iniciar jogo.\n");
    printf("2 - Ver regras.\n");
    printf("3 - Sair.\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numero_secreto = rand() % 10 + 1;
        printf("Divinhe um numero ( entre 1 a 10)\n");
        scanf("%d", &palpite);
        
        if (palpite == numero_secreto)
        {
            printf("Parabens voce acertou.\n");
        }else{
            printf("Voce errou, o numero era %d\n", numero_secreto);
        }
        break;
    case 2:
        printf("Regras do jogo.\n");
        printf("1- Escolha uma opcao de menu.\n");
        printf("Se voce escolher `Iniciar o jogo`, Adivinhe qual o numero secreto.\n");
        printf("O jogo termina se voce escolher.\n");
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