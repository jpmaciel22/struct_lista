//QUESTAO 6
#include <stdio.h>

typedef struct {
    int matricula;
    char nome[100];
    int disciplina;
    float nota1;
    float nota2;
}Aluno;

void main() {
    Aluno alunos[10];
    float mediafinal;

    for(int i = 0; i < 10; i++) {
        printf("\nDigite os dados do aluno %d:\n", i+1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome); // usa se %[^\n]s para permitir espacos nos nomes

        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].disciplina);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("\nListagem final dos alunos:\n");
    printf("Matrícula\tNome\tCódigo Disciplina\tNota 1\tNota 2\tMédia Final\n");
    for(int i = 0; i < 10; i++) {
        mediafinal = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;

        printf("%d\t\t%s\t%d\t\t\t%.1f\t%.1f\t%.1f\n", 
               alunos[i].matricula, alunos[i].nome, alunos[i].disciplina, 
               alunos[i].nota1, alunos[i].nota2, mediafinal);
    }

}