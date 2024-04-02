QUESTAO 5

/* Enquanto você faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usuário que escolha um idioma de preferência 
(1 - Inglês, 2 - Espanhol, 3 - Francês). 
Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int idioma;
printf("\nSelecione o idioma de preferencia: \t");
printf("\n \t 1. ingles - \t 2. espanhol - 3. frances ");
scanf("%d", &idioma);

switch (idioma){
case 1: 
printf("You chose the English language. Welcome!!");
	break;


case 2: 
	printf("Elegiste el idioma inglés. ¡Sea bienvenido!!");
	break;

case 3: 
	printf("Vous avez choisi la langue anglaise. Accueillir!!");
	break;
}
    return 0;
}