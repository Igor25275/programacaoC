#include <stdio.h>


int main(){

    int idade, dependentes;
    float renda;

    printf("Digite sua idade. \n");
    scanf("%d", &idade);

    printf("Digite sua renda mensal. \n");
    scanf("%f", &renda);

    printf("Informe a quantidade de dependentes.\n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65)
    {
        if (renda < 3000)
        {
            if (dependentes > 2)
            {
                printf("Voce atende a todos os criterios.\n");
            }else{
                printf("Voce nao atende ao criterio dependentes.\n");
            }
            
        }else{
            printf("Voce nao atende ao criterio renda.\n");
        }
        
    }else{
        printf("Voce nao atende ao criterio idade.\n");
    }
    


    return 0;
}