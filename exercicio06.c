#include <stdio.h>

/*Escreva um programa que armazene as idades dos alunos que estão presentes em uma aula da
disciplina de Programação de Sistemas Embarcados. Considere que o vetor possa conter até 60
registros. Sabe-se que, em uma dada aula, alguns alunos podem ter faltado. Com isso, leia
elementos até que seja digitado um valor 0 ou enquanto a quantidade de alunos for inferior à
capacidade do vetor. Imprima:
Pontifícia Universidade Católica de Minas Gerais
Instituto de Ciências Exatas e Informática (ICEI)
Engenharia de Computação
Disciplina: Programação de Sistemas Embarcados
● Idade de todos os alunos presentes na aula (não imprimir idades não cadastradas).
● Idade de todos os alunos com idade superior à média*/

int main() {
    
    
    int vetor[60]; //representa registros
    int idade, i, soma =0 ;
    int qtd = 0; // representa alunos
    float media;

    printf("Digite a idade (ou valor 0 para encerrar): ");
    scanf("%d", &idade);

    while (qtd < 60 && idade != 0) {
        vetor[0] = idade; // minha qtd é igual a 0
        soma += idade; //soma das idades
        qtd++; //contador qtd aumenta seu valor de 1 em 1 

        printf("Digite a idade (0 para encerrar): ");
        scanf("%d", &idade);
    }

    if (qtd > 0) {
        media = (float)soma / qtd; //tira a media da soma das idades e divide pela quantidade

        printf("\n Idades dos alunos presentes:\n"); //exibe na tela idade dos alunos presentes
        for (i = 0; i < qtd; i++) { //0 < qtd , i++
            printf("%d ", vetor[i]);
        }

        printf("\n Idades acima da media:");/*exibe na tela as idades que sao a cima da media*/
        
        for (i = 0; i < qtd; i++) {
            if (vetor[i] > media) { // verifica se o numero é maior que a media.
                printf("%d ", vetor[i]);
          }
        }
        }else { // caso receba valor = 0 em idade ou quantidade seja maior que 60 registros
          printf("Nenhum aluno foi cadastrado.\n");
    }

    return 0;
}

