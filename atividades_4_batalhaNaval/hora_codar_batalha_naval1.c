#include <stdio.h>

int main(){

    int index;

    char *alunos[3][3] = {
        {"Igor", "pt: 80", "Mat: 95"},
        {"Adriana", "pt: 95", "Mat: 50"},
        {"Thalita", "pt: 30", "Mat: 70"}
    };

    printf("Digite o numero para acessar ao aluno: \n");
    printf("0 - %s \n", alunos[0][0]);
    printf("1 - %s \n", alunos[1][0]);
    printf("2 - %s \n", alunos[2][0]);

    scanf("%d", &index);

    printf("O aluno %s - Notas: %s - %s \n", alunos[index][0], alunos[index][1], alunos[index][2]);


    return 0;
}