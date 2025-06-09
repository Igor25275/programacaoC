#include <stdio.h>


int main(){

    int idade;
    float renda;

    printf("Digite sua idade. \n");
    scanf("%d", &idade);

    printf("Digite sua renda mensal. \n");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)
    {
        if (renda < 2000)
        {
            printf("Voce atende a todos os criterios.\n");
        }else{
            printf("Voce atende ao criterio da idade porem nao atende ao criterio da renda.\n");
        }
        
    }else{
        printf("Voce nao atende ao criterio da Idade.\n");
    }
    


    return 0;
}