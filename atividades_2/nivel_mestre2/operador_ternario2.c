#include <stdio.h>

int main(){

    int temperatura = 40;
    int resultado;


    resultado = temperatura > 30 ? 1 : 0;

    if (resultado == 1)
    {
        printf("Esta calor.\n");
    }else{
        printf("Esta frio.\n");
    }
    




    return 0;
}