#include <stdio.h>
#include <stdlib.h>

/*
Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos.
O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana.
Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.
*/

int main()
{
    int dia;
    float valorDaCompra;
    float valorFinal;
    float desconto;
    float valorTotal;
    float valorComDesconto;

    printf("\t Dia da semana = 1 \n");
    printf("\t Fim de semana = 2 \n");

    printf("Informe o valor da sua compra: ");
    scanf("%f", &valorDaCompra);
    
    if (dia = 1 && valorDaCompra > 100.00) {
	
    desconto = 0.1;
    valorComDesconto = valorDaCompra * desconto;
    valorTotal = valorDaCompra - desconto;
}
    elseif if (dia = 2 && valorDaCompra > 100.00) {

    desconto = 0.85;
    valorComDesconto = valorDaCompra * desconto;
    valorTotal = valorDaCompra - desconto;
}
    printf("Valor da compra sem desconto: ", valorDaCompra);
    prinf("Valor da compra com desconto: ", valorTotal)
    
    return 0;
}
