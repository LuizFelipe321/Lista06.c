#include <stdio.h>

int main() {
    int senha[4];
    int i;
    int possuiPar = 0;
    int possuiImpar = 0;
    int validacao = 1;

    printf("Digite os 4 digitos/numeros da senha:  \n");

    for(i = 0; i < 4; i++) { // i incrementa mais 1 até 4, e é armazenado no endereco senha
        scanf("%d", &senha[i]);
    }

    if(senha[0] == 0){ //se senha receber 0

        printf("Senha invalida! Divisao por 0\n"); //printa na tela
        validacao = 0; //e variavel validacao recebe valor 0
    }


    // Verifica se possui par e impar. *caso validacao for 0, ele nao entra nessa condicao(caso inicio da senha for 0)
  if (validacao == 1){
    for(i = 0; i < 4; i++) {
        if(senha[i] % 2 == 0){ //se divisao por 2 == 0, numero par
            possuiPar = 1; // variavel ganha 1.
        } else{ //caso contrario
            possuiImpar = 1; // variavel ganha 1. impar
        }
    }
  }

    if(possuiPar && possuiImpar){ //se ambas receberam 1
        printf("Senha valida\n"); // senha valida, atende os requisitos da senha.
    }else{
        printf("Senha invalida\n"); //senha invalida. nao atende todos os requisitos.
    }
    return 0;
}
