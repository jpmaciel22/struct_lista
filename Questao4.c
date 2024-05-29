//QUESTAO 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nome[20];
    long matricula;
    int nota1;
    int nota2;
    int nota3;
    int media;
}Aluno;
void main(){
     Aluno aluno[5]; 
for (int i = 0; i < 5; i++)
    {
printf("Digite as informacoes do aluno: ");
printf("Nome: ");
fflush(stdin);
fgets(aluno[i].nome, 20, stdin);
printf("Matrícula: ");
scanf("%d", &aluno[i].matricula); // get char usado para limpar o buffer do scanf consumindo o  /n
printf("Nota da primeira prova: ");
scanf("%d", &aluno[i].nota1);
printf("Nota da segunda prova: ");
scanf("%d", &aluno[i].nota2);
printf("Nota da terceira prova: ");
scanf("%d", &aluno[i].nota3);
getchar();
     aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d:\n", i+1);
        printf("Nome: %s", aluno[i].nome);
        printf("Matrícula: %d\n", aluno[i].matricula);
        printf("Prova 1: %d\n", aluno[i].nota1);
        printf("Prova 2: %d\n", aluno[i].nota2);
        printf("Prova 3: %d", aluno[i].nota3);
        printf("\n");
    }int maior=0;
    int media=0;
    int menor=0;
    int maiormedia = 0;
    int menormedia = 0;
    int aprovacao = 6;
    int maiornota1 = 0;
    int maiormedia1 = 0;
    int menormedia1 = 0;
        for (int i = 0; i < 5; i++){
            if(aluno[i].nota1 > maior || i == 0 ){ maior = aluno[i].nota1; maiornota1 = i;}
        }
    printf("Maior nota da primeira prova: %d, nome do aluno: %s",maior,aluno[maiornota1].nome);
    for (int i = 0; i < 5; i++){
            if(aluno[i].media > maiormedia || i == 0 ){ maiormedia = aluno[i].media; maiormedia1=i;}
        }
    printf("Maior media dos alunos: %d, nome do aluno: %s",maiormedia,aluno[maiormedia1].nome);
    for (int i = 0; i < 5; i++){
            if(aluno[i].media < menormedia || i == 0 ){ menormedia = aluno[i].media; menormedia1 = i;}
        }
    printf("Menor media dos alunos: %d, nome do aluno: %s",menormedia,aluno[menormedia1].nome);
    for (int i = 0; i < 5; i++)
    {
         if(aluno[i].media > aprovacao){printf("Aluno %s aprovado\n"),aluno[i].nome;}
    }
    
}