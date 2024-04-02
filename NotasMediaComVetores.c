#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    
    char alunos [5][200];
    int idades[5];
    float notas[5][3];
    float media[5];
    int contador, contador_2 = 0;

  
    for (contador = 0; contador < 5; contador++){
        printf("Digite o nome do %d aluno -> ", contador + 1);
        scanf("%s", &alunos[contador]);
        
        printf("Digite a idade do %d aluno: ", contador + 1);
        scanf("%d", &idades[contador]);

        
        printf("Digite as notas do %d aluno: ", contador + 1);
        for(contador_2 = 0; contador_2 < 3; contador_2++ ){
            printf("Nota %d:", contador_2 + 1);
            scanf("%f", &notas[contador][contador_2]);
        }

        
        media[contador] = (notas[contador][0] + notas[contador][1] + notas[contador][2]) / 3;
    }

        

        system("cls||clear");
        printf("\n Dados dos alunos: \n");
        for (contador = 0; contador < 5; contador++){
            printf("Nome: %s \n", alunos[contador]);
            printf("Idade: %d \n", idades[contador]);
            printf("Notas: %.2f, %.2f, %.2f \n", notas[contador][0], notas[contador][1], notas[contador][2], notas[contador][3]);
            printf("Media: %.2f\n ", media[contador]);
             
    
            if (media[contador] >= 7.0) {
            printf("Situação: Aprovado\n");
            } else if (media[contador] >= 5.0) {
            printf("Situação: Em Recuperação\n");
            } else {
            printf("Situação: Reprovado\n");
            }
    }



}