/*
Crie um programa que solicite ao usu�rio dois n�meros e uma opera��o matem�tica (+, -). 
Utilize o switch case para realizar a opera��o desejada e exibir o resultado.

*/

#include <stdlib.h>
#include <stdio.h>
int main() {
    int primeiroNumero;
	int segundoNumero;
	int soma;
	int subtracao;
    char operacao;

    

	printf("Digite o primeiro n�mero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &segundoNumero);

    printf("Informe a opera��o desejada");
    scanf(" %c", &operacao); 

    switch (operacao) {
        
       
case '+':
            soma = primeiroNumero + segundoNumero;
            
printf("Resultado: %.d\n", soma);
            break;
        
       
case '-':
            subtracao = primeiroNumero - segundoNumero;
            
printf("Resultado: %.d\n", subtracao);
            break;
        default:
            
           
printf("Opera��o inv�lida!\n");
}

return 0;
}
