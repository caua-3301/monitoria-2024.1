/*113. Escreva um programa que leia dois números inteiros M e N e imprima todos os
números primos existentes no intervalo [M, N].*/

#include <stdio.h>

void main() {
    int numeroM, numeroN;

    //lendo os dados
    printf("Informe dois numeros: \n");
    scanf("%d%d", &numeroM, &numeroN);

    //realizando uma verificação para garantir que o "numeroM" seja sempre o menor entre os dois informados ->
    if (numeroM > numeroN) {
        int auxiliar = numeroM;
        numeroM = numeroN;
        numeroN = auxiliar;
    }

    //percorrendo o intervalo
    for (int k = numeroM; k < numeroN; k++) {
        //variavel que vai permitir contar quantos divisores exatos o número possui
        int divisores = 0;

        /*for para verificar quantos divisores exatos o numero tem, caso ocorra de o numero ter mais de três divisores ainda na execução do for, ele será encerrado devido a condição: "c <= k && divisores <= 3"*/
        for (int c = 1; c <= k && divisores <= 3; c++) {
            if (k % c == 0) {
                divisores++;
            }
        }
        
        //exibindo o numero apenas se for primo ->
        if (divisores == 2) {
            printf("%d\n", k);
        }
    }
    
    getchar();
}