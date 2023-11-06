/* Enquanto você faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usuário que escolha um idioma de preferência 
(1 - Inglês, 2 - Espanhol, 3 - Francês). 
Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.
*/

int main()
{
int idioma;
printf("\nSelecione o idioma de preferencia: \t");
printf("\n \t 1. ingles - \t 2. espanhol - 3. frances ");
scanf("%d", &idioma);

switch (idioma)
case 1: {
printf("welcome!");
	break;
}

case 2: {
	printf("bienvenido!");
	break;
}
case 3: {
	printf("accueillir!");
	break;
}
    return 0;
}
