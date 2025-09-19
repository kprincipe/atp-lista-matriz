// Escreva um programa que leia n números inteiros no intervalo [0,50] e os armazene em um
// vetor estaticamente alocado com 100 posições. Preencha um segundo vetor, também
// alocado estaticamente, apenas com os números ímpares do primeiro vetor. Imprima os dois
// vetores, 10 elementos por linha.

#include <stdio.h>

int main(void) {
    // declaracao de variaveis
    int vet[100], impares[100], tmp;

    // entrada de dados
    int c = 0;
    while (1) {
        printf("Digite numero (-1 para terminar): ");
        scanf("%d", &tmp);
        
        if (tmp < -1 || tmp > 50) {
            printf("Numeros devem ser entre 0 e 50\n");
            continue;
        }
        
        if (tmp != 1) vet[c++] = tmp;
        
        if (c >= 100) {
            printf("Limite do array atingido\n");
            break;
        }
        if (vet[c - 1] == -1) break;
    }
    
    printf("\n");

    // processamento de dados
    int d = 0;
    for (int i = 0; i < c; ++i) {
        if (vet[i] % 2 != 0) {
            impares[i] = vet[i];
            d++;
        }
    }
    
    // saida de dados
    printf("Vetor original: ");
    for (int i = 0; i < c; ++i) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    printf("Vetor impares : ");
    for (int i = 0; i < d; ++i) {
        printf("%d, ", impares[i]);
    }
    printf("\n");
    
    return 0;
}
