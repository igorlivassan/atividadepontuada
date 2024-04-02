/*
Em um projeto sobre números primos, implemente um programa que solicite ao usuário um número inteiro
e verifique se ele é um número primo utilizando o switch case. Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário.

*/

#include <stdlib.h>
#include <stdio.h>


int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    switch(num) {
        case 0:
        case 1:
            
           
printf("O número %d não é primo.\n", num);
            
           
break;
        case 2:
            printf("O número 2 é primo.\n");
            break;
        default:
            {
                int i, primo = 1; // Inicializa como primo

                for (i = 2; i <= num / 2; ++i) {
                    if (num % i == 0) {
                        primo = 0; // Se for divisível, não é primo
                        break;
                    }
                }

                
                    }
                }

if (primo)
                    printf("O número %d é primo.\n", num);
                
               
else
                    printf("O número %d não é primo.\n", num);
            }
            break;
    }

    
    }

return 0;
}





