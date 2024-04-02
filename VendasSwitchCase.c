#include <stdio.h>
#include <stdlib.h>



int main() {
    char nomesProdutos[9999][50];
    float precos[9999];
    int quantidades[9999];
    int numero_total_vendas = 0;
    float totalVendas = 0;

    int opcao;

    do {
 
        printf("\nMenu:\n");
        printf("1. Adicionar venda\n");
        printf("2. Exibir total de vendas e sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            
                if (numero_total_vendas < 9999) {
                    printf("Digite o nome do produto: ");
                    scanf("%s", nomesProdutos[numero_total_vendas]);

                    printf("Digite o preço do produto: ");
                    scanf("%f", &precos[numero_total_vendas]);

                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &quantidades[numero_total_vendas]);

                    
                    totalVendas += precos[numero_total_vendas] * quantidades[numero_total_vendas];

                    printf("Venda registrada com sucesso!\n");
                    numero_total_vendas++;
                } else {
                    printf("A capacidade máxima de vendas foi atingida.\n");
                }
                break;

            case 2:
                
                printf("\nTotal de vendas realizadas: R$%.2f\n", totalVendas);
                printf("Encerrando o programa.\n");
                break;

            default:
             
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}