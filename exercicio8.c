/*
Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva a partir desse número até zero.
 Utilize o switch case para exibir mensagens personalizadas para cada número da contagem regressiva. 
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
