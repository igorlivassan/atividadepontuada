#include <stdio.h>
#include <stdlib.h>

/*
Em um projeto de classificação de alunos, desenvolva um programa
que receba a nota de um aluno e determine sua classificação com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razoável"
   - Nota menor que 5: "Insuficiente"
*/

int main()
{
	float nota = 0;
    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota > 9)
    {
        printf("Nota excelente! ");
    }

    else if (nota > 7 && nota < 8.9)
    {
        printf("Boa nota!");
    }
    else if (nota > 5 && nota < 6.9)
    {
        printf("Razoavel!");
    }
    else if (nota < 5)
    {
        printf("Insuficiente!");
    }

    return 0;
}
