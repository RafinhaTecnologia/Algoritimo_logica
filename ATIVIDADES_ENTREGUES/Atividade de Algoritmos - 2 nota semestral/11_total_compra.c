#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    float preco, toal;
    int quantidade;
    
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &quantidade);

    toal = preco * quantidade;

    printf("O valor total da compra é: R$ %.2f\n", toal);
        

    return 0;
}