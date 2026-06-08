#include <stdio.h>

int main() {
    int vetor[5];
    int i;
    int menorPrimeira = 0;
    int aux;

    // Leitura dos elementos, e armazena na variavel vetor
    for(i = 0; i < 5; i++) {
      scanf("%d", &vetor[i]);
    }

    // Procura a posição do menor elemento
    for(i = 1; i < 5; i++) {
        if(vetor[i] < vetor[menorPrimeira]) {
            menorPrimeira = i;
        }
    }

    // Troca o menor elemento com o primeiro elemento do vetor
    aux = vetor[0];
     vetor[0] = vetor[menorPrimeira]; //primeiro elemento do vetor recebe mesmo valor do menor numero do vetor
    vetor[menorPrimeira] = aux; //menor elemento do vetor recebe o mesmo valor do primeiro elemento do vetor

    // Impressão do vetor
    printf("Vetor final:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
