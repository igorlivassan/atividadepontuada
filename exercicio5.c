/* Enquanto voc� faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usu�rio que escolha um idioma de prefer�ncia 
(1 - Ingl�s, 2 - Espanhol, 3 - Franc�s). 
Com base na escolha do usu�rio, exiba a mensagem de boas-vindas no idioma selecionado.
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
