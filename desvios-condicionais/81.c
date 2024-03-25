/*81. Escreva um programa que leia os valores das coordenadas x e y do centro de uma
circunferência e o valor do seu raio e, a seguir, leia as coordenadas x e y de um ponto e
verifique se este ponto está localizado dentro da circunferência.*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, raio, x2, y2;

    //lendo valores
    printf("Informe em sequencia as coordenadas de x e y do primeiro ponto e em seguida digite o valor de um raio: \n");
    scanf("%f%f%f", &x1, &y1, &raio);

    printf("Agora, informe as coordenadas x e y do segundo ponto: \n");
    scanf("%f%f", &x2, &y2);

    //efetuando o calculo da distancia entre os dois pontos com base na formula fornecida
    float diferenca_X = x1 - x2;
    float diferenca_Y = y1 - y2;

    float soma_dos_quadrados = pow(diferenca_X, 2) + pow(diferenca_Y, 2);

    float distancia_entre_os_pontos = sqrt(soma_dos_quadrados);

    //verificando se a distancia entre os pontos e menor que o raio
    if (distancia_entre_os_pontos <= raio) {
        printf("Esta dentro da circunferencia");
    }
    else {
        printf("Nao esta dentro da circunferencia");
    }

    return 0;
}