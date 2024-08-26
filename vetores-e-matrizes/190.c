/*190 Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
verifique quantas linhas nulas existem na matriz.*/

#include <stdio.h>

#define TAM 5

void main() {
    float matriz[TAM][TAM];

    //preenchendo a matriz de tal forma que a linha 2 seja nula:
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            //altere o 1 por 0 ou 2, dessa forma, você escolhe qual linha será nula a fim de exemplo
            if (i == 1) {
                matriz[i][j] = 0;
            }
            else {
                matriz[i][j] = i + j + 1 ;//somando números quaisquer e adicionando 1 para que a soma nunca seja 0
            }
        }
    }


    //lendo a matriz
    /*
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Informe um numero real: \n");
            scanf("%f", &matriz[i][j]);
        }
    }
    */

    for (int i = 0; i < TAM; i++) {
        //nesse caso abaixo, 1 = true (verdadeiro) e 0 = false (falso), a linha começa nula até que se prove ao contrário
        int linhaEhNula = 1;

        for (int j = 0; j < TAM && linhaEhNula == 1; j++) {
            if (matriz[i][j] != 0) {
                //se a linha tiver qualquer valor diferente(!=) de zero, ela não é nula
                linhaEhNula = 0;
            }
        }
        if (linhaEhNula == 1) {
            printf("A linha %d eh nula \n", i+1);
        }
    }

    getchar();
}