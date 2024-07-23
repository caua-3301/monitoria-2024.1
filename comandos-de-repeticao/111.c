/*111. Escreva um programa que leia o termo inicial e a razão de uma PA e um número
inteiro positivo N e imprima os N primeiros termos da progressão.*/

#include <stdio.h>

void main() {
    int termo_inicial, razao, execucoes;

    //recendo os dados do usuário
    printf("Informe o termo incial da PA, a razao e o numero de execucoes: \n");
    scanf("%d%d%d", &termo_inicial, &razao, &execucoes);

    int progressao_acumulada = 0;

    /*executa até que k seja menor ou igual ao numero de execuções, e, a cada repeticao, a razao é incrementada no valor total da PA*/
    for (int k = 1; k <= execucoes; k++) {
        progressao_acumulada += razao;
        printf("Termo %d = %d\n", k, progressao_acumulada);
    }

    getchar();
}