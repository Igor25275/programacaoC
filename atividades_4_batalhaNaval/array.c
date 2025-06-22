#include <stdio.h>


int main(){

    printf("Inteiros\n");

    int notas[4] = {10, 8, 7, 4};

    for (int i = 0; i < 4; i++){

        printf("Nota %d : %d\n", i + 1, notas[i]);
    }

    printf("\nLetras\n");

    char letras[4] = {'a', 'b', 'c', 'd'};
    int j = 0;

    while (j < 4)
    {
        printf("Letra: %c \n", letras[j]);

        j++;
    }

    printf("\nNomes\n");

    char *nomes[] = {"Igor", "Adriana", "Roberto", "Jose"};
    int k = 0;
    do
    {
        printf("Nome indice[%d]: %s \n", k, nomes[k]);
        k++;

    } while (k < 4);
    
    


    return 0;
}