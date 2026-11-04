#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int matriz[2][3];
    
    // Leitura dos valores da matriz (2 linhas x 3 colunas)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\n");

    // Impressão dos valores da matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("O valor da matriz na posição [%i][%i] é: %i\n", i, j, matriz[i][j]);
        }
    }
    
    return 0;
}