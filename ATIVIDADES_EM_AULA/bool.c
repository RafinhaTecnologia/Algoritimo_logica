#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

        const int senha = 1234;
        bool acesso = false;
        int senha_usuario;
    
        while(acesso == false){
        printf("Digite a senha:\n");
        scanf("%i", &senha_usuario);
    
        if (senha_usuario == senha){
            acesso = true;
        }
    }
    
        printf("Acesso liberado\n");

    return 0;
}