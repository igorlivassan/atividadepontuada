QUESTAO 9

/*
Em um projeto sobre números primos, implemente um programa que solicite ao usuário um número inteiro
e verifique se ele é um número primo utilizando o switch case. Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário.
*/

#include<stdio.h>
#include <stdlib.h>
 
int main() {
int numero = 0;
int contador = 0;
int resultado = 0;
 
printf("Digite um número: ");
scanf("%d", &numero);
 
 for (contador = 2; contador <= numero / 2; contador++) {
    if (numero % contador == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", numero);
 else
    printf("%d não é um número primo\n", numero);
 
 return 0;
}
