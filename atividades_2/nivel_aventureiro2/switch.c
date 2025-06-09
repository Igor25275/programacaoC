#include <stdio.h>


int main(){

    int numero;
    
    printf("Digite um numero.\n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Numero == 1\n");
        break;
    case 2:
        printf("Numero == 2\n");
        break;
    default:
        printf("Numero nao e igual nem ao 1 e nem ao 2.\n");
        break;
    }


    return 0;
}