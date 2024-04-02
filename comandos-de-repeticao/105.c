/* 105. Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos os números do intervalo [M, N]. */

#include <stdio.h>

void main() {
    int numeroM, numeroN, somaDoIntervalo = 0, cont = 0;

    printf("Informe respectivamente dois numeros de um intervalo: \n");
    scanf("%d%d", &numeroM, &numeroN);

    //partindo do maior até o menor do intervalo
    //cont recebe numeroN - 1 porque o numero N em não estará incluído na soma
    for (cont = numeroN - 1; cont > numeroM; cont--) {
        somaDoIntervalo += cont;
    }

    printf("A soma do intervalor entre %d e %d vale %d", numeroM, numeroN, somaDoIntervalo);
}