/*
Voc� � um desenvolvedor de um sistema de seguran�a e precisa criar um algoritmo que, dado um c�digo de acesso,
permita ao usu�rio entrar em um edif�cio. 
 O algoritmo deve continuar repetindo at� que o usu�rio digite o c�digo de acesso correto.

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
