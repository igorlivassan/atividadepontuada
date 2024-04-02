QUESTAO 12 

/*Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. 
O programa deve calcular e exibir a média das notas digitadas. Utilize o for para repetir o processo de solicitação das notas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

//Variaveis:

float nota = 0;
int contagemNota = 0;
int contador = 0;
int soma = 0;
float media = 0;
int contavez = 0;
int corrige = 0;

printf("Quantas notas você deseja inserir?");
scanf("%d", &contagemNota);
corrige = contagemNota + 1;

for (contador = 1; contador < corrige; contador ++) {
    
contavez++;
printf("Insira a %dª nota:", contavez);
scanf("%f", &nota);

soma += nota;
media = soma / contador;

}

printf("Média das notas: %.1f", media);

}