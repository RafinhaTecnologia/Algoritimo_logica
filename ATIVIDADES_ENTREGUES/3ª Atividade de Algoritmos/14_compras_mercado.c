#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(65001);       // Garante a leitura correta de acentos no teclado/terminal
    SetConsoleOutputCP(65001); // Garante a exibição correta de acentos na tela

    float precos[6];
    float total = 0.0;
    int acima_50 = 0;

    // 1. Leitura dos preços e processamento inicial
    printf("=== CADASTRO DE PREÇOS (MERCADO) ===\n");
    for (int i = 0; i < 6; i++) {
        printf("Digite o preço do produto %d: R$ ", i + 1);
        scanf("%f", &precos[i]);

        // Somar ao total da compra
        total += precos[i];

        // Verificar se o valor é maior que R$: 50,00
        if (precos[i] > 50.0) {
            acima_50++;
        }
    }

    // 2. Apresentação dos preços registrados
    printf("\n=== PREÇOS REGISTRADOS ===\n");
    for (int i = 0; i < 6; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    // 3. Exibição do resumo final
    printf("\n---------------------------------------\n");
    printf("Valor total da compra: R$ %.2f\n", total);
    printf("Quantidade de produtos acima de R$ 50,00: %d\n", acima_50);

    return 0;
}