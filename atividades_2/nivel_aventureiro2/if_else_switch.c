#include <stdio.h>


int main(){

    int dia;

    printf("Digite um numero.\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo.\n");
        break;
     case 2:
        printf("segunda.\n");
        break;
     case 3:
        printf("terca.\n");
        break;
     case 4:
        printf("quarta.\n");
        break;
     case 5:
        printf("sexta.\n");
        break;
     case 6:
        printf("Domingo.\n");
        break;
     case 7:
        printf("sabado.\n");
        break;
    default:
        printf("Numero digitado e invalido.\n");
        break;
    }






    return 0;
}