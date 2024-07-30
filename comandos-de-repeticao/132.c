/*132. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*****
****
***
**
*
*/

#include <stdio.h>

int main() {
    int numeroEstrelas = 5;

    //este primeiro for é destinado a controlar as linhas da "árvore" de estrelas
    for (int k = numeroEstrelas; k > 0; k--) {
        //ja este segundo é responsável por exibir as estrlas em si, ele vai executar "k" vezes
        for (int c = 0; c < k; c++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}