#include <stdio.h>


int main(){

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int numPar = 0, numImpar = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] % 2 == 0)
            {
                numPar++;
            }else{
                numImpar++;
            }
            
        }
        
    }

    printf("Quantidade de numeros: \n");
    printf("Par: %d\n", numPar);
    printf("Impar: %d\n", numImpar);
    





    return 0;
}