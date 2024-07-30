/*112. Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/

#include <stdio.h>

void main() {
    int numero, fibonacci = 1, anterior = 0, proximo = 1;

    printf("Informe um numero: \n");
    scanf("%d", &numero);

    /*a cada execução do loop um novo termo da sequência de fibonacci é gerado, nos deixando um número (numero - 1) mais próximo do desejado pelo usuário*/
    while(numero) {
        anterior = fibonacci;
        fibonacci = proximo;
        proximo = fibonacci + anterior;
        numero--;
    }

    printf("O numero da serie de fibonnaci vale %d\n", fibonacci);
}