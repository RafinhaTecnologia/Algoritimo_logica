#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);
{
    int idade;
    
    printf("Digite uma idade:\n");
    scanf("%i", &idade);
    
    while(idade <= 0 || idade > 120){
        printf("Idade inválida!\n\n");
        printf("Digite a idade novamente:\n");
        scanf("%i", &idade);
    }
    
    if(idade < 18){
        printf("Você é menor de idade!\n");
    }else if (idade >= 18 && idade < 65){
        printf("Você é maior de idade!\n");
    }else{
        printf("Você é idoso!\n");
    }
    return 0;
}