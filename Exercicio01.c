#include <stdio.h>

int atividade01() {
    float vetor[5];
    float dobro[5];
    int i;

    // Leitura dos 5 números
    for(i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    // Geração do vetor com os dobros
    for(i = 0; i < 5; i++) {
        dobro[i] = vetor[i] * 2;
    }

    // Exibição dos vetores
    printf("Vetor original:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\n\nVetor com o dobro dos valores:\n");
    for(i = 0; i < 5; i++) {
        printf("%.2f ", dobro[i]);
    }

    return 0;
}
