QUESTAO 2

/*
Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos.
O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana.
Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorCompra = 0;
	float desconto;
	int dia = 0;
	float valorDiaDeSemana = 0;
	float valorFDS = 0;
	float aplicandoDesconto = 0;
	float descontandoFds = 0;
	
	printf("\n Escolha '1' para dia de semana.");
	printf("\n Escolha '2' para fim de semana.");
	printf("\n Escolha a opcao do dia: ");
	scanf("%d", &dia);
	printf("\n Informe o valor da sua compra: ");
	scanf("%f", &valorCompra);

	
	if(valorCompra > 100 && dia == 1){
		desconto = 0.1;
		aplicandoDesconto = valorCompra * desconto;
		valorDiaDeSemana = valorCompra - aplicandoDesconto; 
		printf("\n \t Valor sem desconto: %1.f", valorCompra);
		printf("\n \t Valor dia de semana: %.1f", valorDiaDeSemana); 
		
	}
	
	else if (valorCompra > 100 && dia == 2){
		desconto = 0.85;
		descontandoFds = valorCompra - desconto;
		valorFDS = valorCompra - descontandoFds;
		printf("\n \t Valor sem desconto: %1.f", valorCompra);
		printf("\n \t Valor com desconto: %.1f", valorFDS);
	}
    return 0;
}