#include <stdio.h>

int main() {
    float vetor[5]; //
    float vetorDobro[5];
    int i;

    // Leitura dos 5 números
    for(i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    // Geração do vetor com os dobros
    for(i = 0; i < 5; i++) {
        vetorDobro[i] = vetor[i] * 2; //vetores * (seu dobro)
    }

    // Exibição dos vetores na tela
    printf("Vetor original:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\n\nVetor com o dobro dos valores:\n"); //exibicao dos valsores dos vetores dobrados na tela
    for(i = 0; i < 5; i++) {
        printf("%.2f ", vetorDobro[i]);
    }

    return 0;
}
