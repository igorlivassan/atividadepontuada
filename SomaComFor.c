/*
Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. 
O programa deve calcular e exibir a média das notas digitadas. Utilize o for para repetir o processo de solicitação das notas.

*/

#include <stdlib.h>
#include <stdio.h>
int main() {

int contador;
int nota = 0;
int soma;
float media;

for (int contador = 1; contador <= 5; contador++) {
        printf("Digite a nota %d: ", contador);
        scanf("%d", &nota);
        soma += nota;
    }

    media = soma / contador;
    
        soma += nota;
    }

    media = soma / contador;
   

        soma += nota;
    }

    media = soma / contador

        soma += nota;
    }

    media = soma

        soma += nota;
    }

    media

        soma += nota

        soma
printf("A média das notas é: %.2f\n", media);

return 0;
}
