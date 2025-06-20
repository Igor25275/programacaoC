#include <stdio.h>

int main(){

    // Declarar variáveis

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoque_minimo_A = 500;
    unsigned int estoque_minimo_B = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir informações dos produtos

    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoB, estoqueB, valorB);

    // Comparação valor minimo de estoque 

    resultadoA = estoqueA > estoque_minimo_A;
    resultadoB = estoqueB > estoque_minimo_B;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    // comparação entre os valores totais dos produtos

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B: (R$ %.2f)? %d\n", 
                                                                                estoqueA * valorA,
                                                                                estoqueB * valorB,
                                                                            (estoqueA * valorA) > 
                                                                         (estoqueB * valorB) );


    return 0;
}