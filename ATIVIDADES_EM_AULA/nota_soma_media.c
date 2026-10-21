#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){

    float nota, soma = 0, media =0;

    for(int i = 0; i < 5; i++){

        printf("Digite a nota do aluno:\n");
        scanf("%f", &nota);

        while(nota < 0 || nota > 10){
            printf("Nota inválida!\n\n");
            printf("Digite a nota novamente:\n");
            scanf("%f", &nota);
        }

        soma = soma + nota;

        if(i == 4){
            media = soma / 5;

            if(media > 6){
                printf("O aluno foi aprovado!\n");
            }else{
                printf("O aluno foi reprovado!\n");
            }

            printf("A média das notas é: %.2f", media); // A média das notas foi: 8.00
        }
    }
        return 0;
}