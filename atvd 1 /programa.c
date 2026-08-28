#include <stdio.h>

int main() {
    char nome[50];
    int idade, qtd;
    float saldo, preco, total;

    printf("Nome do cliente: ");
    scanf("%s", nome);
    
    printf("Idade: ");
    scanf("%d", &idade);
    
    printf("Saldo disponivel: R$ ");
    scanf("%f", &saldo);
    
    printf("Preco do produto: R$ ");
    scanf("%f", &preco);
    
    printf("Quantidade desejada: ");
    scanf("%d", &qtd);

    total = preco * qtd;

    if (idade >= 18 && saldo >= total) {
        printf("\n--- COMPRA EFETUADA ---\n");
        printf("Cliente: %s\n", nome);
        printf("Sucesso! Produto(s): %d | Valor Total: R$ %.2f\n", qtd, total);
        
    } else if (idade >= 18 && saldo < total) {
        printf("\nErro: Compra nao efetuada - Cliente sem saldo suficiente\n");
        
    } else if (idade < 18 && saldo >= total) {
        printf("\nErro: Compra nao efetuada - Cliente menor de idade\n");
        
    } else if (idade < 18 && saldo < total) {
        printf("\nErro: Compra nao efetuada - Menor de idade e sem saldo\n");
    }
    return 0;
}
