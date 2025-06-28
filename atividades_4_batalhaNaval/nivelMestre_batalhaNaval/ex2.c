#include <stdio.h>

#define LINHA 5
#define COLUNA 5

int main(){

    int matrix[LINHA][COLUNA];
    int cont = 1;
    int busca = 30;
    int encontrado = 0;

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){

            matrix[i][j] = cont;
            cont++;
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){

           if (matrix[i][j] == busca)
           {
                printf("O numero %d foi encontrado na posiçao [%d][%d].\n", busca, i, j);
                encontrado = 1;    
                break;
           }
           
        }   
        if(encontrado) break;;
    
    }

    if (!encontrado)
    {
        printf("O numero %d buscado nao foi encontrado.\n", busca);
    }
    

    return 0;
}