#include <stdio.h>
#include <stdlib.h>

/*
Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura.
O jogo tem um sistema de clima que depende da temperatura externa.
Se a temperatura for superior a 25 graus Celsius, o clima será ensolarado.
Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso.
Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.
*/

int main()
{
    int temperatura;

    printf("\n Olá! Vamos iniciar a aventura! ");
    printf("\n Precisamos saber a temperatura que está lá fora. \nDigite em seguida: ");
        scanf("%d", &temperatura);

    if (temperatura > 25)
    {
        printf("Você informou que a temperatura está acima de 25 graus Celsius! \nUm dia ensolarado te espera!");
    }
    else if (temperatura < 15)
    {
        printf("Você informou que a temperatura está abaixo de 15 graus Celsius! \nHoje será um dia chuvoso!");
    }
    else if (temperatura > 15 || temperatura < 25)
        printf("Você informou que a temperatura está entre 15 e 25 graus Celsius! \nUm dia nublado te espera!");

    return 0;
}
