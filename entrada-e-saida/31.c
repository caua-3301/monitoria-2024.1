#include <stdio.h>

void main() {
    int questoes_acertadas, questoes_erradas, questoes_em_branco;
    int pontuacao_final;

    printf("Digite o numero de questoes acertadas: ");
    scanf("%d", &questoes_acertadas);

    printf("Digite o numero de questoes erradas: ");
    scanf("%d", &questoes_erradas);

    printf("Digite o numero de questoes em branco: ");
    scanf("%d", &questoes_em_branco);

    pontuacao_final = (questoes_acertadas * 5) - (questoes_erradas * 3);

    printf("\nPontuacao final: %d pontos\n", pontuacao_final);
}

