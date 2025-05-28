#include <stdio.h>

int main(){

    int n1, n2, n3;
    float media;
    
    printf("*** Programa de calculo de média ***\n");


    printf("Digite a Nota 1: \n");
    scanf("%d", &n1);

    printf("Digite a Nota 2: \n");
    scanf("%d", &n2);

    printf("Digite a Nota 3: \n");
    scanf("%d", &n3);

    // calcula média do aluno
    media = (float)( n1 + n2 + n3) / 3;

    // exibe média do aluno
    printf("A media do aluno(a) foi: %.2f\n", media);

    return 0;
}