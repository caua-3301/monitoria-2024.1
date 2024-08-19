/*161. Escreva um programa que leia um vetor de vinte caracteres e verifique se o vetor é
ou não um palíndromo.

o que é um palindromo? -> https://brasilescola.uol.com.br/o-que-e/portugues/o-que-e-palindromo.htm
*/

#include <stdio.h>

#define TAM 3

void main() {
    char caracteres[TAM];
    int palindromo = 1; //variavel que indica se o vetor é um palindromo, 1 = sim, 0 = nao

    for(int k = 0; k < TAM; k++) {
        printf("Informe o %do caractere: \n", k+1);
        scanf("%c", &   caracteres[k]);
        //coletando o caractere "\n" gerado após precionar a tecla enter
        fflush(stdin);
    }

    for (int k = 0; k < TAM && palindromo == 1; k++) {
        //sempre comparando as extremidades do vetor, se diferentes, não é um palindromo
        if (caracteres[k] != caracteres[TAM-k-1]) {
            palindromo = 0;
        }
    }

    if (palindromo == 1) {
        printf("Eh um palindromo");
    }
    else {
        printf("Nao eh um palindromo");
    }

}