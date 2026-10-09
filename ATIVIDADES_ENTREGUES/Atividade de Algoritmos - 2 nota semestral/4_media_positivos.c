#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int numero;
    int soma=0;
    int cont_positivos =0;
    int contador =1;
    float media;

    while (contador <=10)
    {
        printf("Digite o %i° número: ", contador);
        scanf("%i", &numero);

        if (numero >0){
        soma = soma +numero;
        cont_positivos++;
        }
        contador++;

    }

    if (cont_positivos >0){
        media =(float)soma / cont_positivos;
        printf("\nMédia dos números positivos: %.2f\n", media);
    }else
    {
        printf("\nNenhum número positivo foi digitado. \n");
    }
    
    

    return 0;
}