#include <stdio.h>
#include <locale.h>
#include<windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(65001);

    int celsius;
    float fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);
        

    return 0;
}