#include <stdio.h>


int main(){

    int a = 10, b = 5, c = 1;

    /* 
        a > 0 - verdadeiro
        b > 0 - verdadeiro 
        verdadeiro && veradeiro => veradeiro
        verdadeiro || c == 0
        veradeiro || falso => verdadeiro


    */
    

    if (a > 0 && b > 0 || c == 0){

        printf("Sentenca verdadeira.\n");
    }else{

        printf("Sentenca negativa.\n");
    }

    return 0;
}