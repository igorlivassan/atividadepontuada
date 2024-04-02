/*
Modele uma struct "conta_bancaria" que represente uma conta bancária com número da conta, 
nome do titular, saldo e tipo de conta (poupança ou corrente). 
Implemente funções para depositar e sacar dinheiro da conta, bem como para imprimir o saldo atual. 
Crie um programa que utilize essas funções para simular operações bancárias. Crie um menu para as operações disponíveis.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct conta_bancaria {
    int numero_conta;
    char nome_titular[50];
    float saldo;
    char tipo_conta[20]; 
};

void depositar(struct conta_bancaria *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Deposito de %.2f realizado com sucesso. Novo saldo: %.2f\n", valor, conta->saldo);
    } else {
        printf("Valor de deposito invalido.\n");
    }
}

void sacar(struct conta_bancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso. Novo saldo: %.2f\n", valor, conta->saldo);
    } else {
        printf("Valor de saque invalido ou saldo insuficiente.\n");
    }
}

void imprimir_saldo(struct conta_bancaria conta) {
    printf("Saldo atual da conta: %.2f\n", conta.saldo);
}

void exibir_menu() {
    printf("\nMenu:\n");
    printf("1 - Depositar dinheiro\n");
    printf("2 - Sacar dinheiro\n");
    printf("3 - Consultar saldo\n");
    printf("4 - Sair do programa\n");
    printf("Escolha a opcao (1/2/3/4): ");
}

int main() {
    struct conta_bancaria conta = {123456, "Igor Vasconcelos", 3000.0, "corrente"};

    int opcao;
    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                {
                    float valor_deposito;
                    printf("Digite o valor a ser depositado: ");
                    scanf("%f", &valor_deposito);
                    depositar(&conta, valor_deposito);
                }
                break;
            case 2:
                {
                    float valor_saque;
                    printf("Digite o valor a ser sacado: ");
                    scanf("%f", &valor_saque);
                    sacar(&conta, valor_saque);
                }
                break;
            case 3:
    
                imprimir_saldo(conta);
                break;
            case 4:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}