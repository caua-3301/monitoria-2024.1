/*191 Escreva um programa que leia duas matrizes quadradas de ordem 5 de números
reais e gere uma terceira matriz correspondente à soma das duas matrizes lidas.

soma de matrizes -> https://brasilescola.uol.com.br/matematica/adicao-subtracao-matrizes.htm
*/

#include <stdio.h>

#define TAM 5

void main() {
    float matrizA[TAM][TAM], matrizB[TAM][TAM], matrizSoma[TAM][TAM];

    //lendo a matriz A
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Informe um numero real para a matriz A: \n");
            scanf("%f", &matrizA[i][j]);
        }
    }

    //lendo a matriz B
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Informe um numero real para a matriz B: \n");
            scanf("%f", &matrizB[i][j]);
        }
    }

    //somando as matrizes
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    //exibindo a matriz resutante
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%.1f ", matrizSoma[i][j]);
        }
        //quebrando uma linha a cada linha da matriz para melhor exibição
        printf("\n");
    }

    getchar();
}