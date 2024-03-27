#include <stdio.h>

// usamos o calculo do volume para resolver a questao
// volume = comprimento * largura * altura
// altura = volume / comprimento * largura

void main() {
    float comprimento, largura, litros, altura;

    printf("Digite o comprimento da cisterna em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da cisterna em metros: ");
    scanf("%f", &largura);

    printf("Digite a quantidade de litros desejados: ");
    scanf("%f", &litros);

    float volume = litros / 1000; // convertendo de litros para metros cubicos

    // Calcula a altura necessaria para armazenar a quantidade de litros desejados
    altura = volume / (comprimento * largura);

    printf("Para armazenar %.2f litros, deve-se encher a cisterna com %.2f metros de altura.\n", litros, altura);

}

