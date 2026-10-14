#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int  num, soma = 0;

    for( int cont =0; cont <5; cont++){
        printf("Digite um número:\n");
        scanf("%i", &num);
    
        if(num == 5){
            continue;
        }

        soma=soma + num;
    }

    printf("O resultado foi: %i\n", soma);

    return 0;

}