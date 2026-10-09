#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    float saldo = 1000.0;
    int opcao = 0;
    float valor;

    while (opcao != 4)
    // Exibir as opções na tela
    {
        printf("\nMenu do Banco:\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        // Tratar cada opção escolhida pelo usuário
        if (opcao == 1){
            printf("Seu saldo atual é: R$ %.2f\n", saldo);
        } else if (opcao == 2){
            printf("Digite o valor a ser depositado: ");
            scanf("%f", &valor);
            saldo += valor;
            printf("Depósito realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
        } else if (opcao == 3){
            printf("Digite o valor a ser sacado: ");
            scanf("%f", &valor);
            if (valor <= saldo){
                saldo -= valor;
                printf("Saque realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
            } else {
                printf("Saldo insuficiente para realizar o saque.\n");
            }
        } else if (opcao == 4){
            printf("Saindo do sistema. Obrigado!\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}