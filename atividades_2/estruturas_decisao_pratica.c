#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 18){

        printf("Voce e maior de idade: %d anos.\n", idade);

    }else{

        printf("Voce e menor de idade: %d anos.\n", idade);
    }

    return 0;
}


