#include <stdio.h>

/*Escreva um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor, C, calculando C = A - B. Mostre na tela os dados do vetor C.*/

int atividade05()
{
    int i;
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    printf("Digite 10 numeros:");
    for(int i=0; i < 10; i++){
        scanf("%d", &vetorA[i]);

    }
    printf("Digite 10 numeros:");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetorB[i]);
    }
    printf("Digite 10 numeros:");
    for(int i=0; i < 10; i++){
        scanf("%d", &vetorC[i]);
        vetorC[i] = vetorA[i] - vetorB[i];

    }

    printf("Vetor:");
    for(int i=0; i < 10; i++){
            printf("%d\n", vetorC[i]);
    }

    return 0;
}
