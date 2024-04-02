/*
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). 
Utilize o switch case para realizar a operação desejada e exibir o resultado.

*/

#include <stdlib.h>
#include <stdio.h>
int main() {
    int primeiroNumero;
	int segundoNumero;
	int soma;
	int subtracao;
    char operacao;

    

	printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    printf("Informe a operação desejada");
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
            
           
printf("Operação inválida!\n");
}

return 0;
}
