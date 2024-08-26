/*185. Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule o valor da soma dos elementos de cada uma de suas linhas.*/

#include <stdio.h>

#define TAM 5

void main() {
    float matriz[TAM][TAM];

    //lendo a matriz
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Informe um numero real: \n");
            scanf("%f", &matriz[i][j]);
        }
    }

    //iterando sobre a matriz e somando o valor de cada linha
    for (int i = 0; i < TAM; i++) {
        float soma = 0.0;
        for (int j = 0; j < TAM; j++) {
            soma += matriz[i][j];
        }
        printf("A soma da linha %d vale %.2f \n", i+1, soma);
    }

    getchar();
}