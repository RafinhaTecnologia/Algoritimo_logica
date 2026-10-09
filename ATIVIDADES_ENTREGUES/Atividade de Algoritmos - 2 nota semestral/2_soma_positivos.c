#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int numero;
    int soma = 0;
    int contador = 1;

    while (contador <=4){

        printf("Digite o %i° número: ", contador);
        scanf("%i", &numero);

        //Se o número for positivo, adiciona soma
        if (numero > 0){
            soma = soma + numero;
        }
        contador++; //avança a contagem até chegar em 4
    }

    printf("\nA soma dos números positivos é: %i\n", soma);

    return 0;
}