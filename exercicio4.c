/* Em um projeto de controle de acesso, crie um programa que solicite ao usu�rio sua idade e 
verifique se ele tem permiss�o para acessar um determinado recurso. 
Se a idade for maior ou igual a 18, exiba a mensagem "Acesso permitido". Caso contr�rio, exiba a mensagem "Acesso negado".
*/

int main()
{
int idade;

printf("Informe sua idade para fazer login: ");
scanf("%d", &idade);

if (idade > 18)
{
	printf("Acesso permitido!");
}
else {
	printf("Acesso negado!");
}
    return 0;
}
