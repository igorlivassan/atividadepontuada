QUESTAO 7

/*Em um projeto para um jogo, é necessário cria um menu, crie um programa que exiba um menu com opções
(1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações). Solicite ao usuário que escolha uma opção e, 
utilizando o switch case, execute a funcionalidade correspondente à opção escolhida.
*/

#include <stdio.h>
#include <stdlib.h>
	
int main()
{
int escolha;
	
printf("\n \t 1. NOVO JOGO - \t 2. CARREGAR JOGO - 3. CONFIGURACOES ");
printf("\nSelecione o produto desejado: \t");
scanf("%d", &escolha);

switch (escolha)
case 1: {
printf("Novo jogo selecionado!");
break;
	
case 2: 
printf("Carregando novo jogo...!");
break;
	
case 3: 
printf("Configurações...!");
break;
}

return 0;
}