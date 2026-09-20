#include <stdio.h>
#include <stdbool.h>

int main() {
    float saldo = 0.0;
    int opcao;
    float valor;
    bool encerrar = false;

    printf("POV -> Caixa Eletronico\n");

    while (!encerrar) {
        printf("\n--- Menu de Opcoes ---\n");
        printf("1 | Consultar Saldo\n");
        printf("2 | Depositar\n");
        printf("3 | Sacar\n");
        printf("4 | Encerrar\n");

        printf("\nEscolha a operacao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo atual: R$ %.2f\n", saldo);
        } 
        else if (opcao == 2) {
            printf("Digite o valor para deposito: R$ ");
            scanf("%f", &valor);
            
            if (valor > 0) {
                saldo = saldo + valor;
                printf("Deposito realizado com sucesso!\n");
            } else {
                printf("Valor invalido!\n");
            }
        } 
        else if (opcao == 3) {
            printf("Digite o valor para saque: R$ ");
            scanf("%f", &valor);
            
            if (valor > saldo) {
                printf("Saldo insuficiente!\n");
            } else if (valor > 0) {
                saldo = saldo - valor;
                printf("Saque realizado com sucesso!\n");
            } else {
                printf("Valor invalido!\n");
            }
        } 
        else if (opcao == 4) {
            encerrar = true;
            printf("Sistema encerrado.\n");
        } 
        else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
