//QUESTAO 16
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
typedef struct {
    Data data;
    char descricao[60];
} Compromisso;
void main() {
Compromisso compromisso[5];
int pesquisarm = 1 , pesquisara;
for (int i = 0; i < 5; i++)
{
printf("DIGITE O COMPROMISSO: ");
fgets(compromisso[i].descricao,60,stdin);
printf("DIGITE O MES: ");
scanf("%d",&compromisso[i].data.mes);
printf("DIGITE O DIA: ");
scanf("%d",&compromisso[i].data.dia);
printf("DIGITE O ANO: ");
scanf("%d",&compromisso[i].data.ano);
getchar();
}
while(pesquisarm != 0){
printf("\nDigite 0 para sair\n");
printf("DIGITE UM MES: ");
scanf("%d",&pesquisarm);
printf("DIGITE UM ANO: ");
scanf("%d",&pesquisara);
for (int i = 0; i < 5; i++)
{
if(pesquisarm == compromisso[i].data.mes){
printf("Na data %d",compromisso[i].data.dia);
printf(" o compromisso é %s\n",compromisso[i].descricao);
}}
}

}
