/*163. O IFPB precisa de um programa que faça a correção automática das provas do seu
teste de seleção. A prova, que é a mesma para todos os alunos, consiste de dez
questões objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o nome de um candidato e as opções que aparecem no
seu cartão de respostas. Para cada candidato, o programa deve imprimir o seu
percentual de acertos. O processamento deve ser encerrado quando for encontrado
um candidato com o nome  ́fim’, que não deve ser processado. O programa deve
imprimir também a pontuação média dos candidatos.*/

#include <stdio.h>
#include <string.h>

#define TAMANHONOME 255

const int QUESTOES = 10;

void main() {
    char provaOficial[QUESTOES], nomeAluno[TAMANHONOME], numeroCorrecoes = 0, somaNota = 0;

    //gabarito oficial sendo lido
    for (int k = 0; k < QUESTOES; k++) {
        printf("Informe a resposta da questao %d da prova oficial: \n", k+1);
        scanf("%c", &provaOficial[k]);
        fflush(stdin);
    }

    printf("Informe o nome do aluno: \n");
    gets(nomeAluno);

    //executando enquanto o nome do aluno for diferente de "fim"
    while (strcmp(nomeAluno, "fim") != 0) {
        char alternativaAluno;
        int acertos = 0;

        for (int k = 0; k < QUESTOES; k++) {
            printf("Informe a questao %d do aluno %s\n", k+1, nomeAluno);
            scanf("%c", &alternativaAluno);
            fflush(stdin);

            if (alternativaAluno == provaOficial[k]) {
                acertos++;
            }
        }

        //incrementando a correção de mais uma prova
        numeroCorrecoes++;
        //somando o numero de acertos do aluno
        somaNota += acertos;

        float percentual = (acertos/10) * 100;

        printf("O aluno %s obteve %.1f %% de aproveitamento\n\n", nomeAluno, percentual);

        printf("Informe o nome do aluno ('fim' para encerrar): \n");
        gets(nomeAluno);
    }

    float mediaAcertos = somaNota/numeroCorrecoes;

    printf("Foram corrigidas %d provas com uma media de %.1f acertos por prova\n\n", numeroCorrecoes, mediaAcertos);

}