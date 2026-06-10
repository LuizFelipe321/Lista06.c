#include <stdio.h>

/*Implemente um programa que criptografe uma sequência de números fornecida pelo usuário
utilizando a cifra de César. Utilize vetores de inteiros para armazenar a mensagem original e a
mensagem criptografada. Permita que o usuário especifique o deslocamento (chave) a ser
utilizado na criptografia.*/

int main(){
    int i, chave, n;
    int criptografada[10]; //variavel vetores inteiros para armazenar mensagem criptografada
    int original[10]; //variavel vetores inteiros para armazenar mensagem original

    printf("Digite a chave:\n"); //usuario especifica o deslocamento (chave)
    scanf("%d", &chave);

    printf("Quantidade de numeros\n");
    scanf("%d", &n);

    printf("Mensagens originais\n");
    for(i=0; i < n; i++) { // contador i é aumentado até atingir a ultima quantidade inteira menor que n digitada
        scanf("%d", &original[i]);
    }

    printf("Mensagens criptografadas\n");
    for (i=0; i < n; i++){
        scanf("%d", &criptografada[i]);
    }

    for(i=0; i < n; i++){
       criptografada[i] = original[i] + chave; //criptografada armazena vetores original + valor chave digitada pelo usuario
                                               //chave (deslocamento)
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
