#include <stdio.h>


int main(){

    int num;
    float saldo = 1000;
    printf("Digite a opcao que deseja:\n");
    printf("1 - saldo.\n");
    printf("2 - fazer deposito.\n");
    printf("3 - fazer saque.\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Seu saldo e: R$ %.2f Reais.\n", saldo);
        break;
    case 2:
        printf("Informe o banco:\n");
        printf("Informe a agencia:\n");
        printf("Informe a conta:\n");
        break;
    case 3:
        printf("Informe o valor que deseja sacar:\n");
        break;
    default:
        printf("Valor digitado invalido.\n");
        break;
    }

    return 0;
}