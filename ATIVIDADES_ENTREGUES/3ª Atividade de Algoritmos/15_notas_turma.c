#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(65001);       // Garante a leitura correta de acentos no teclado/terminal
    SetConsoleOutputCP(65001); // Garante a exibição correta de acentos na tela

    float notas[5][4];
    float soma_turma = 0.0;
    int aprovados = 0;

    // 1 Leitura das 4 notas dos 5 alunos
    printf("=== CADASTRO DE NOTAS (TURMA) ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        float soma_aluno = 0.0;

        for (int j = 0; j < 4; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma_aluno += notas[i][j];
            soma_turma += notas[i][j];
        }
        // Calcular a média do aluno
        float media_aluno = soma_aluno / 4.0;
        if (media_aluno >= 6.0) {
            aprovados++;
        }
    }

    // 2. Apresentação de todas as notas registradas
    printf("\n=== NOTAS REGISTRADAS ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }

    //3. Exibição da média da turma e contagem de aprovados
    float media_turma = soma_turma / (5.0 * 4.0);

    printf("\n---------------------------------------\n");
    printf("Média geral da turma = %.2f\n", media_turma);
    printf("Alunos com média ou igual a 6.0: %d\n", aprovados);

    return 0;
}