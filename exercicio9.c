/*
Em um projeto sobre n�meros primos, implemente um programa que solicite ao usu�rio um n�mero inteiro
e verifique se ele � um n�mero primo utilizando o switch case. Exiba a mensagem "N�mero primo" caso seja primo, ou "N�mero n�o primo" caso contr�rio.

*/

#include <stdlib.h>
#include <stdio.h>


int main() {
    int num;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    switch(num) {
        case 0:
        case 1:
            
           
printf("O n�mero %d n�o � primo.\n", num);
            
           
break;
        case 2:
            printf("O n�mero 2 � primo.\n");
            break;
        default:
            {
                int i, primo = 1; // Inicializa como primo

                for (i = 2; i <= num / 2; ++i) {
                    if (num % i == 0) {
                        primo = 0; // Se for divis�vel, n�o � primo
                        break;
                    }
                }

                
                    }
                }

if (primo)
                    printf("O n�mero %d � primo.\n", num);
                
               
else
                    printf("O n�mero %d n�o � primo.\n", num);
            }
            break;
    }

    
    }

return 0;
}





