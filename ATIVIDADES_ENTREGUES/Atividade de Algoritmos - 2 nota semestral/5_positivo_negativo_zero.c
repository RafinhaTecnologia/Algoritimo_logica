#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int numero;
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;
    int contador = 1;

    while (contador <=6){
        scanf("%i", &numero);
        if (numero > 0){
            positivos++;
        } else if (numero < 0){
            negativos++;
        } else {
            zeros++;
        }
    
        contador++;
    }
        printf("\nQuantidade de números positivos: %d\n", positivos);
        printf("Quantidade de números negativos: %d\n", negativos); 
        printf("Quantidade de zeros: %d\n", zeros);   
        

    return 0;
}