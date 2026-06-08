#include <stdio.h>

int atividade03() {
    int vetor[100]; //100 elementos na variavel vetor
    int i = 0; //contador
    int num = 0;

    while(i < 100) { //Enquanto i < 100
        if(num % 6 != 0 && num % 10 != 6) { //verifica os numeros que nao sao multiplos de 6 e que nao recebem valor 6
            vetor[i] = num; //posicao i = num
            i++; //aumenta 1 no contador
        }
        num++; //num aumenta 1 independe da condicao (passa por todos) e vai incrementando em 1
    }

    printf("Conteudo do vetor:\n");

    for(i = 0; i < 100; i++) {
        printf("%d ", vetor[i]); //printa os 100 elementos , valores que nao sao multiplos de 6 e resta valor 6
    }

    return 0;
}
