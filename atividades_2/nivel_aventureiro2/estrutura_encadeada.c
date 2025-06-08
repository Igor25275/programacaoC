#include <stdio.h>

int main(){

    int idade;
    
    printf("Informe sua idade.\n");
    scanf("%d", &idade);

    if (idade >= 60){
        printf("Voce e um idoso.\n");
    }else if (idade >= 18){
        printf("Voce e um adulto.\n");
    }else if (idade >= 12){
        printf("Voce e um adolescente.\n");
    }else{
        printf("Voce e uma crianca.\n");
    }

    return 0;
}