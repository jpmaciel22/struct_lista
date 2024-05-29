//QUESTAO 10
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    char nome[100];
    char endereco[200];
    char telefone[20];
} Pessoa;
void main(){
    Pessoa pessoas[5];
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
         printf("Digite o nome: ");
        fgets(pessoas[i].nome, 100, stdin);
        printf("Digite o endereço: ");
    fgets(pessoas[i].endereco, 200, stdin);
    printf("Digite o telefone: ");
    fgets(pessoas[i].telefone, 20, stdin);
}
    Pessoa temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0) {
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }
for (int i = 0; i < 5; i++)
{
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
        printf("\n");
}
}