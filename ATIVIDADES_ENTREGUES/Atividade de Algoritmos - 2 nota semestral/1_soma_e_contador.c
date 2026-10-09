#include <stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero;
    int contador = 0 ;
    int soma=0;
    printf("Digite o primeiro número:");
    scanf("%i", &numero);

        while (numero!=0)
        {
            soma=numero+soma;
            contador++
            printf("Digite o próximo número:");
            scanf("%i", &numero);
        }
        printf("")
        }
    return 0;
}