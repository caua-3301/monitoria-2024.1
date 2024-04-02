/* 104. Escreva um programa que leia um número inteiro N e verifique se ele é um número
perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores
exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito. */

#include <stdio.h>

void main() {
    int numero, divisor, somaDosDivisores = 0;

    printf("Informe o numero para ser analisado: \n");
    scanf("%d", &numero);

    /* divisor sempre receberá o valor do número informado menos um, e a condição de para é que o divisor seja menor que 0 */
    for (divisor = numero - 1; divisor > 0; divisor--) {
        int resto = numero % divisor;

        //verificando se o divisor é exato, se sim, soma
        if (resto == 0) {
            somaDosDivisores += divisor;
        }
    }

    if (somaDosDivisores == numero) {
        printf("%d eh um numero perfeito!", numero);
    }
    else {
        printf("%d nao eh um numero perfeito", numero);
    }
}