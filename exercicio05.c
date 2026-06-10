#include <stdio.h>

/*Escreva um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor, C, calculando C = A - B. Mostre na tela os dados do vetor C.*/

int main() {
 int i;
 int vetorA[10];
 int vetorB[10];
 int vetorC[10];

 printf("Digite 10 numeros:");
 for(int i=0; i < 10; i++){
    scanf("%d", &vetorA[i]); // vai nos 10 vetores de vetorA

    }
 printf("Digite 10 numeros:");
 for(int i = 0; i < 10; i++){
    scanf("%d", &vetorB[i]); //vai nos 10 vetores de vetorB
    }
    
 printf("Digite 10 numeros:");
 for(int i=0; i < 10; i++){
    scanf("%d", &vetorC[i]); //vai nos 10 vetores de vetorC
    vetorC[i] = vetorA[i] - vetorB[i]; //realiza o calculo de subtracao entre os 'vetoresA' e 'vetoresB' e vetorC recebe o valor

    }

 printf("Vetor:"); //exibe na tela os vetores de C 10 vetores, do vetorC[0] até o vetorC[9]
 for(int i=0; i < 10; i++){
    printf("%d\n", vetorC[i]);
    }

 return 0; //encerra o programa
}
