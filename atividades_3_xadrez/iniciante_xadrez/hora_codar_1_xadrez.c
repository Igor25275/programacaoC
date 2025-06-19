#include <stdio.h>

int main(){

    int i = 1;

    while (i <= 10)
    {
        if (i % 2 != 0) // se mudar para == imprime numeros pares e != imprime numeros impares
        {
            printf("O numero %d e impar.\n", i);
        }
        
        i++;
    }
    

    return 0;
}