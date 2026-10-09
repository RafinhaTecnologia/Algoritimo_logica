#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int numero;
    int pares = 0;
    int impares = 0;
    int contador = 1;

    while (contador <= 5)
    {
        printf("Digite o %i° número: ", contador);
        scanf("%i", &numero);

        //testar se o número lido é PAR
        if (numero % 2 == 0){
            pares++; //se for par, aumenta a contagem de pares
        } else
            impares++; // Se não for par, aumenta a contagem de ímpares
    
        contador++; //avança a contagem até chegar a 5


        }
   
        //Exibe os resultados finais
        printf("\nQuantidade de números pares: %d\n", pares);
        printf("\nQuantidade de números ímpares: %d\n", impares);

    return 0;
}