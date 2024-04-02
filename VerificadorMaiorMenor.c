QUESTAO 13 

//Crie um programa que solicite do usuÃ¡rio dois nÃºmeros inteiros e informe qual destes nÃºmeros Ã© o maior e qual Ã© o menor

#include <stdio.h>
#include <stdlib.h>

int main(){

//Variações:

int numeroUm = 0;
int numeroDois = 0;

    printf("Insira um valor: " );
    scanf("%d", &numeroUm);

    printf("Insira outro valor: ");
    scanf("%d", &numeroDois);


    if (numeroUm > numeroDois){
        printf("\n \t O maior valor é: %d, e o menor é: %d", numeroUm, numeroDois);
    }
    else {
        printf("\n \t O maior valor é: %d, e o menor é: %d", numeroDois, numeroUm);
    }

}