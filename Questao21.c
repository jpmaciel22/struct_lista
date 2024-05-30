//QUESTAO 21
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    char nome[20];
    int ano;
    int duracao;
} Filme;
void main(){
typedef struct {
    char nome[20];
    int quantosfilmes;
    Filme *filmes;
} Diretor;
Diretor diretores[2];

for (int i = 0; i < 2; i++) {
        printf("Digite o nome do diretor que deseja inserir: ");
        fgets(diretores[i].nome, 20, stdin);
        printf("Digite a quantidade de filmes do diretor: ");
        scanf("%d", &diretores[i].quantosfilmes);
        getchar(); 
        
        diretores[i].filmes = (Filme *)malloc(diretores[i].quantosfilmes * sizeof(Filme));
        
        for (int j = 0; j < diretores[i].quantosfilmes; j++) {
            printf("Digite o nome do filme %d do diretor %s: ", j + 1, diretores[i].nome);
            fgets(diretores[i].filmes[j].nome, 20, stdin);
            printf("Digite o ano do filme %d do diretor %s: ", j + 1, diretores[i].nome);
            scanf("%d", &diretores[i].filmes[j].ano);
            printf("Digite a duracao (em minutos) do filme %d do diretor %s: ", j + 1, diretores[i].nome);
            scanf("%d", &diretores[i].filmes[j].duracao);
            getchar();
        }
}
char pesquisa[20];
       while(strlen(pesquisa)!=0){
        printf("\nDigite o nome do filme a ser buscado");
        fgets(pesquisa,25,stdin);
        int encontrada = 0;
        for (size_t i = 0; i < 5; i++){
        if (strstr(diretores[i].nome, pesquisa) != NULL) {
        encontrada = 1;
        for (int j = 0; j < diretores[i].quantosfilmes; j++) {
        printf("  %s: %.2f, %.2f\n", diretores[i].filmes[j].nome, diretores[i].filmes[j].ano, diretores[i].filmes[j].duracao);
                }
            }
          if (encontrada == 0) {
            printf("Receita não encontrada.\n");
        }
    }
    }
}