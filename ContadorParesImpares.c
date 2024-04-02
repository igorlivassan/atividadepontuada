QUESTAO 14	

/*
Implemente um programa que solicite do
usuário números inteiros e verifique quantos números são pares e quantos são ímpares. 
Além disto, 
deve ser exibido a média aritmética de números pares e impares. 
Deve-se interromper a leitura dos dados quando for digitado um valor negativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int numero = 0;
int contadorPar = 0;
int contadorImpar = 0;
int somaPar = 0;
int somaImpar = 0;
float mediaPar = 0;
float mediaImpar = 0;

do{

printf("Insira um numero: ");
scanf("%d", &numero);

if (numero % 2 == 0){
    somaPar += numero;
    contadorPar++;
    mediaPar = somaPar / contadorPar;
}
else if (numero % 2 == 1) {
    somaImpar += numero;
    contadorImpar++;
    mediaImpar = somaImpar / contadorImpar;
}

} while (numero > 0);

printf("\n \t quantidade de números pares: %d ", contadorPar);
printf("\n \t quantidade de números impares: %d ", contadorImpar);
printf("\n");
printf("\n \t media dos numeros pares: %1.f", mediaPar);
printf("\n \t media dos numeros impares: %1.f", mediaImpar);

return 0;
}