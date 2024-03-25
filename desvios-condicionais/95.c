/*95. Escreva um programa que leia quatro números reais e verifique se eles formam, na
ordem em que foram digitados, uma progressão aritmética, uma progressão
geométrica, os dois tipos de progressão ou nenhum tipo de progressão.*/

#include <stdio.h>

int main() {
    float numero1, numero2, numero3, numero4, eh_pg = 0, eh_pa = 0;

    printf("Informe 4 numeros: \n");
    scanf("%f%f%f%f", &numero1, &numero2, &numero3, &numero4);

    //calculando a razão de uma PA (n+1 - n)
    float razao_pa = numero2 - numero1;

    //checando se a diferença entre eles atendem a razão
    if (numero3 - numero2 == razao_pa && numero4 - numero3 == razao_pa) {
        eh_pa = 1;
    }

    //calculando a razão de uma PG (n+1/2)
    float razao_pg = numero2/numero1;

    if (numero3/numero2 == razao_pg && numero4/numero3 == razao_pg) {
        eh_pg = 1;
    }

    //checando se forma ou não
    if (eh_pa && eh_pg) {
        printf("Forma uma PA e uma PG");
    }
    else if (eh_pa) {
        printf("Forma uma PA");
    }
    else if (eh_pg) {
        printf("Forma uma PG");
    }
    else {
        printf("Nao forma nenhuma progressao");
    }

    return 0;
}