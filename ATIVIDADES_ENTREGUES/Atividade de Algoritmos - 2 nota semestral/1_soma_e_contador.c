#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int numero;
    int soma=0;
    int contador=0;

    printf("Digite o primeiro número:");
    scanf("%i", &numero);

        while (numero != 0)
        {
            soma=soma + numero;
            contador++;
            printf("Digite o próximo número:");
            scanf("%i", &numero);
        }

        printf("\nSoma total: %d\n", soma);
        printf("Quantidade de números digitados: %d\n", contador);
        

    return 0;
}