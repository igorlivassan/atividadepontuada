QUESTAO 15

/*
Implemente um programa que converta 
valores entre diferentes unidades de medida, como por exemplo, 
quilômetros para milhas e Celsius para Fahrenheit.
O programa deve permitir ao usuário escolher a conversão desejada e repetir o processo para vários valores. 
	Utilize o switch case  e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

int opcao = 0;
float temperaturaC = 0;
float temperaturaF = 0;
float quilometros = 0;
float milhas = 0;


do{

printf("\n \t 1. Celsius para Fahrenheit.");
printf("\n \t 2. Quilômetros para Milhas.");
printf("\n \t Selecione: ");
scanf("%d", &opcao);

switch(opcao){

    case 1:
    printf("\n Conversao de Celsius para Fahrenheit.");

    printf("\n Informe a temperatura: ");
    scanf("%f", &temperaturaC);
    temperaturaF = temperaturaC * 1.8 + 32; // * 1,8 e soma 32.
    printf("\n Resultado da conversão: %.1f", temperaturaF);
    break;

    case 2:
    printf("\n Informe um valor em Quilômetros: ");
    scanf("%f", &quilometros);
    milhas = quilometros / 1.609;
    printf("\n Resultado da conversão: %.1f", milhas);
    break;
    
}
} while (opcao != 0);
return 0;
}


