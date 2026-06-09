#include <stdio.h>

/*Implemente um programa que criptografe uma sequência de números fornecida pelo usuário
utilizando a cifra de César. Utilize vetores de inteiros para armazenar a mensagem original e a
mensagem criptografada. Permita que o usuário especifique o deslocamento (chave) a ser
utilizado na criptografia.*/

int main(){
    int i, chave, n;
    int criptografada[2];
    int original[2];

    printf("Digite a chave:\n");
    scanf("%d", &chave);

    printf("Quantidade de numeros\n");
    scanf("%d", &n);

    printf("original\n");
    for(i=0; i < n; i++) {
        scanf("%d", &original[i]);
    }

    printf("criptografia\n");
    for (i=0; i < n; i++){
        scanf("%d", &criptografada[i]);
    }

    for(i=0; i < n; i++){
       criptografada[i] = original[i] + chave;
    }

    /*exibindo na tela vetor original*/
    printf("mensagem original:\n");
    for(i = 0; i < n; i++){
        printf("%d", original[i]);
    }

    /*exibindo na tela vetor criptografada*/
    printf("mensagem criptografada:\n");
    for(i = 0; i < n; i++){
        printf("%d", criptografada[i]);
    }

    return 0;
}
