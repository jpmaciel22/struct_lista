//QUESTAO 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nome[20];
    long matricula;
    char curso[50];
}Aluno;
void main(){
     Aluno aluno[5];
    for (size_t i = 0; i < 5; i++)
    {
printf("Digite as informacoes do aluno: ");
printf("Nome: ");
fflush(stdin);
fgets(aluno[i].nome, 20, stdin);
printf("Matrícula: ");
scanf("%d", &aluno[i].matricula);
getchar(); // get char usado para limpar o buffer do scanf consumindo o  /n
printf("Curso: ");
fflush(stdin);
fgets(aluno[i].curso, 50, stdin);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s", aluno[i].nome);
        printf("Matrícula: %d\n", aluno[i].matricula);
        printf("Curso: %s", aluno[i].curso);
        printf("\n");
    }
    
    
}