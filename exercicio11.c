/*
Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, dado um código de acesso,
permita ao usuário entrar em um edifício. 
 O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.

*/

#include <stdlib.h>
#include <stdio.h>
int main() {

int codigo = 12345;
do {
printf("Informe seu codigo de acesso: ");
scanf("%d", &codigo);
}

while (codigo != 12345);
printf("Bem-vindo! \n");


return 0;
}
