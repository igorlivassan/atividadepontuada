QUESTAO 6

/*Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário o código do produto
(1 - Camiseta, 2 - Calça, 3 - Sapato). 
Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.
*/

#include <stdio.h>
#include <stdlib.h>
	
int main()
{
		
int escolha = 0;
	
printf("\n \t 1. camiseta - \t 2. calça - 3. sapato ");
printf("\nSelecione o produto desejado: \t");
scanf("%d", &escolha);
	
if (escolha == 1) {
printf("Você escolheu a opcao '1' - CAMISETA no valor de R$49,90");
}
else if (escolha == 2) {
printf("Você escolheu a opcao '2' - CALÇA no valor de R$79,90");
}
else if (escolha == 3) {
printf("Você escolheu a opcao '1' - SAPATO no valor de R$129,90");	
}
else {
printf("Opcao invalida!");
}
return 0;
}
