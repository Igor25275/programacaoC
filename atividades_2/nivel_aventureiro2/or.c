#include <stdio.h>


int main(){

    int a = -10, b = -5;

    if (a > 0 || b > 0){

        printf("Pelos menos um dos numeros e positivo.\n");
    }else{

        printf("Os dois numeros sao negativos.\n");
    }

    return 0;
}