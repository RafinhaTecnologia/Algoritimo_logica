#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);
{
    int opt;
    float num1, num2, res;

    do{
        printf("Escolha uma das opções:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        scanf("%i", &opt);
    
        if(opt == 5){
            printf("Saindo da calculadora...\n");
        }else if(opt < 1 || opt > 5){
            printf("Opção inválida!\n");
            printf("Digite a opção novamente:\n");
            scanf("%i", &opt);
        }else{
            printf("Digite o primeiro número:\n");
            scanf("%f", &num1);

            printf("Digite o segundo número:\n");
            scanf("%f", &num2);

            if(opt == 4){
                while(num2 == 0){
                    printf("o número 0 não pode ser divisor!\n\n");
                printf("Digite o segundo número novamente:\n");
                    scanf("%f", &num2);
                }
            }

            switch(opt){
                case 1:
                    res = num1 + num2;
                    break;
                    
                    case 2:
                    res = num1 - num2;
                    break;

                    case 3:
                    res = num1 * num2;
                    break;

                    case 4:
                    res = num1 / num2;
                    break;
            }
            printf("O resultado da operação é: %.2f\n\n", res);
        }
    }while(opt != 5);
    return 0;
}