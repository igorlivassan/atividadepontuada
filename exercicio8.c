/*
Desenvolva um programa que solicite ao usu�rio um n�mero inteiro positivo e fa�a uma contagem regressiva a partir desse n�mero at� zero.
 Utilize o switch case para exibir mensagens personalizadas para cada n�mero da contagem regressiva. 
*/

#include <stdlib.h>
#include <stdio.h>

int main() { 

int numero;
int contador;

printf("Insira um numero: ");
scanf("%d", &numero);

for (contador = numero; contador >= 0; contador --){
printf("\n  %d", contador);
}
    return 0;
}
