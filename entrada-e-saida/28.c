#include <stdio.h>

void main() {
    float valor_compra, valor_desconto, valor_parcelas3, valor_parcelas10, juros;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    
    // Calcula o desconto para pagamento a vista (10%)
    valor_desconto = valor_compra * 0.10;
    
    // Calcula o valor das parcelas para pagamento em 3 vezes no cartao (sem juros)
    valor_parcelas3 = valor_compra / 3;
    
    // Calcula o valor das parcelas para pagamento em 10 vezes no cartao (com juros de 20%)
    juros = valor_compra * 0.20;
    valor_parcelas10 = (valor_compra + juros) / 10;
    
    printf("\nValor da compra (a vista com desconto de 10%%): R$ %.2f\n", valor_compra - valor_desconto);
    printf("Valor de cada parcela (3 vezes no cartao): R$ %.2f\n", valor_parcelas3);
    printf("Valor de cada parcela (10 vezes no cartao com juros de 20%%): R$ %.2f\n", valor_parcelas10);
}

