/*162. Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.

como o calculo e feito -> https://embarcados.com.br/conversao-entre-sistemas-de-numeracao/
teste seu programa -> https://www.prepostseo.com/tool/br/decimal-to-binary-converter
*/

#include <stdio.h>

//com o numero maximo sendo 255, o maior binario possivel possui 7 digitos (1111111)
#define LIMITE 7

void main() {
    int numero, binario[LIMITE];

    printf("Informe um numero inteiro: \n");
    scanf("%d", &numero);
 
    for (int k = 0; k < LIMITE; k++) {
        if (numero > 0) {
            binario[k] = numero%2;
            numero /= 2;
        }
        else {
            //quando a operacao com o numero acabar (numero <= 0), o loop continua para preencher os espaços em branco com 0
            binario[k] = 0;
        }
    }

    //exibindo ao usuario de tras para frente
    for (int k = LIMITE-1; k >= 0; k--) {
        printf("%d", binario[k]);
    }
}