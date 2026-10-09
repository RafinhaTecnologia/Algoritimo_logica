#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

   int soma=0;
   int contador=1;

   while (contador <=10){

        soma = soma + contador;
        contador++;
    }
    printf("Soma dos números de 1 a 10: %d\n", soma);

    return 0;
}