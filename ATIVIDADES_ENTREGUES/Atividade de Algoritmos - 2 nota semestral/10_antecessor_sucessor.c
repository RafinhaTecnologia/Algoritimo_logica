#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int antecessor, sucessor, numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O antecessor de %d é: %d\n", numero, antecessor);
    printf("O sucessor de %d é: %d\n", numero, sucessor);

    return 0;
}