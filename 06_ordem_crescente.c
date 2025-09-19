// Considere um vetor A com 11 elementos onde A1 < A2 < _ _ _ < A6 > A7 > A8 >_ _ _ >
// A11, ou seja, está ordenado em ordem crescente até o sexto elemento, e a partir desse
// elemento está ordenado em ordem decrescente. Dado o vetor da questão anterior, proponha
// um algoritmo para ordenar os elementos.

#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int vet[11], tmp, maior = 0;

    // entrada de dados
    printf("Preencha o vetor:\n");
    for (int i = 0; i < 11; ++i) {
        printf("\tvet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    printf("\n");

    // processamento de dados
    for (int i = 0; i < 11; ++i) {
        if (vet[i] > maior) maior = vet[i]; // econtra maior elemento do array
        if (vet[i] == maior && i != 5) { // troca maior elemento para posicao 5
            tmp = vet[5];
            vet[5] = maior;
            vet[i] = tmp;
        }
    }

    // organiza primeira metade em ordem crescente
    // e segunda metade em ordem decrescente
    int f = 0;
    while (f != 4) {
        f = 0;
        for (int i = 0; i < 4; ++i) {
            if (vet[i] > vet[i + 1]) {
                tmp = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = tmp;
                continue;
            }
            if (vet[i + 6] < vet[i + 7]) {
                tmp = vet[i + 7];
                vet[i + 7] = vet[i + 6];
                vet[i + 6] = tmp;
                continue;
            }
            f++;
        }
    }

    // saida de dados
    printf("----------------------------------------------\n| ");
    for (int i = 0; i < 11; ++i) {
        printf("%d | ", vet[i]);
    }
    printf("\n----------------------------------------------\n");
    
    return 0;
}
