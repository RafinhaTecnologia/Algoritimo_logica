#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int area, base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%d", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%d", &altura);

    area = base * altura;
    printf("A área do retângulo é: %d\n", area);
    printf("A base do retângulo é: %d\n", base);
    printf("A altura do retângulo é: %d\n", altura);
        

    return 0;
}