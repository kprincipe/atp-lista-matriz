// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o
// vetor, o maior elemento e a posição que ele se encontra.

#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int vet[10], tmp = 0, indice;

    // entrada de dados
    printf("Preencha vetor:\n");
    for (int i = 0; i < 10; ++i) {
        printf("\tvetor[%d]: ", i);
        scanf("%d", &vet[i]);

        if (vet[i] > tmp) tmp = vet[i];
    }

    // processamento
    for (int i = 0; i < 10; ++i) {
        if (vet[i] == tmp) indice = i;
    }
    
    printf("--------------------------------\n");
    printf("    Maior numero: %d, Indice: %d\n", tmp, indice);
    printf("--------------------------------\n");
    return 0;
}
