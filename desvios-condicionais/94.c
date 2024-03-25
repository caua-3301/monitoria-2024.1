/*94. Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você
pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O
valor máximo de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso
das cédulas maiores.*/

#include <stdio.h>

const int MAX_SAQUE = 1000;

int main() {
    int valor_saque, notas_cem = 0, notas_cinquenta = 0, notas_vinte = 0, notas_dez = 0;

    printf("Informe o valor do saque: \n");
    scanf("%d", &valor_saque);

    //verificando se o valor é superior ao máximo permitido
    if (valor_saque > MAX_SAQUE) {
        valor_saque = MAX_SAQUE;
    }

    /*verificando se é possível entregar nostas de cem, para isso, o valor deve ser maior ou igual a cem (isso vale para as outras notas)*/
    if (valor_saque >= 100) {
        notas_cem = valor_saque/100;
        valor_saque %= 100;
    }

    if (valor_saque >= 50) {
        notas_cinquenta = valor_saque/50;
        valor_saque %= 50;
    }

    if (valor_saque >= 20) {
        notas_vinte = valor_saque/20;
        valor_saque %= 20;
    }

    if (valor_saque >= 10) {
        notas_dez = valor_saque/10;
        valor_saque %= 10;
    }

    //exibindo ao usuário
    printf("Resumo saque \nNotas cem = %d \nNotas cinquenta = %d \nNotas vinte = %d \nNotas dez = %d \n\nTroco %d", notas_cem, notas_cinquenta, notas_vinte, notas_dez, valor_saque);

    return 0;
}