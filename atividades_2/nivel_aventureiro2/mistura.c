#include <stdio.h>


int main(){

    int numero;
    
    printf("Digite um numero.\n");
    scanf("%d", &numero);

    if (numero > 0)
    {
        if (numero % 2 == 0)
        {
            printf("Numero par.\n");
        }else{
            printf("Numero impar.\n");
        }
        
    }else if (numero == 0)
    {
        printf("Numero e zero.\n");
    }else{
        printf("Numero e negativo.\n");
    }
    
    

    return 0;
}