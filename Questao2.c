//QUESTAO 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nome[100];
    int idade;
    char endereco[100];
}pessoa;
void main(){
    pessoa pessoa1 = {"",19,""};
strcpy(pessoa1.nome, "Joao");
strcpy(pessoa1.endereco, "Cond Busca Vida");
printf("%s,%d,%s", pessoa1.nome,pessoa1.idade,pessoa1.endereco);
}