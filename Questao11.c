//QUESTAO 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nome[20];
    long matricula;
    int mediaf;
}Aluno;
void main(){
    Aluno alunos[10];
    Aluno aprovados[10];
    Aluno reprovados[10];
    int mediaaprovacao = 5;
    for (int i = 0; i < 10; i++)
    {
     printf("Digite as informações do aluno %d: ",i+1);
     printf("Nome: ");
    fflush(stdin);
    fgets(alunos[i].nome, 20, stdin);
    printf("Matrícula: ");
    scanf("%d", &alunos[i].matricula);
    printf("Media final do aluno: ");
    scanf("%d", &alunos[i].mediaf);
    getchar();
    }
    for (size_t i = 0; i < 10; i++)
    {
          if(alunos[i].mediaf > mediaaprovacao){aprovados[i] = alunos[i];}
          else{
            reprovados[i] = alunos[i];
          }
    }
    printf("Alunos aprovados: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",aprovados[i].nome);
    }
    printf("Alunos reprovados: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",reprovados[i].nome);
    }
}