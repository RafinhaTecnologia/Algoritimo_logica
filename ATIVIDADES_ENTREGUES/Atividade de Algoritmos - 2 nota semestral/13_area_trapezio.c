#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int base_maior, base_menor, altura;
    float area;

    printf("Digite a base maior do trapézio: ");
    scanf("%d", &base_maior);

    printf("Digite a base menor do trapézio: ");
    scanf("%d", &base_menor);

    printf("Digite a altura do trapézio: ");
    scanf("%d", &altura);

    area = ((base_maior + base_menor) * altura) / 2.0;
    printf("A área do trapézio é: %.2f\n", area);
        

    return 0;
}