/* 108. Escreva um programa que leia 20 números entre 10000 e 99999 referente aos
números dos deputados estaduais eleitos e identifique a quantidade de candidatos
que cada partido elegeu. O número do partido do deputado pode ser identificado
pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato
com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um
candidato com número 45879 concorre pelo PSDB, que é o partido de número 45.
Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15
(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB). */

#include <stdio.h>

void main()
{
    int voto, numeroVotos = 20, votosPT = 0, votosPTB = 0, votosPMDB = 0, votosDEM = 0, votosPSDB = 0, votosPCdoB = 0, partido;

    do {
        //lendo voto
        printf("Informe seu voto (esta operacao eh segura) faltam %d votos\n: ", numeroVotos);
        scanf("%d", &voto);

        //isolando o valor do partido deslocando a virgula para a nidade de milhar
        partido = voto/1000;

        //identificando e quantificando
        switch (partido) {
            case 13 : votosPT++;
                break;
            case 14 : votosPTB++;
                break;
            case 15 : votosPMDB++;
                break;
            case 25 : votosDEM++;
                break;
            case 45 : votosPSDB++;
                break;
            case 65 : votosPCdoB++;
                break;

            default : printf("Partido nao encontrado");
        }

    /* aqui estamos pré decrementando, ou seja, antes de realizar a comparação (numeroVotos > 0) o número perde uma unidade */
    } while (--numeroVotos > 0);

    printf("Resultados da quantidade de votos: \nPT - %d\nPTB - %d\nPMDB - %d\nDEM - %d\nPSDB - %d\nPCdoB - %d", votosPT, votosPTB, votosPMDB, votosDEM, votosPSDB, votosPCdoB);
}