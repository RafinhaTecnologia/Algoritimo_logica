#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = (float)numero1 / (float)numero2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0;
}