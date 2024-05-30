//QUESTAO 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nome[25];
    float quantidade;
} Ingrediente;
typedef struct {
    char nome[25];
    int quantosing;
    Ingrediente ingredientes[5];
} Receita;

void main(){
     Receita receitas[5];
    char pesquisa[25];
       for (int i = 0; i < 5; i++) {
    printf("Digite o nome da receita %d: ", i + 1);
        fgets(receitas[i].nome, 15, stdin);
        printf("Digite a quantidade de ingredientes da receita %d: ", i + 1);
        scanf("%d", &receitas[i].quantosing);
        getchar();
        for (int j = 0; j < receitas[i].quantosing; j++) {
            printf("Digite o nome do ingrediente %d da receita %s: ", j + 1, receitas[i].nome);
            fgets(receitas[i].ingredientes[j].nome, 25,stdin);
            
            printf("Digite a quantidade do ingrediente %d da receita %s: ", j + 1, receitas[i].nome);
            scanf("%f", &receitas[i].ingredientes[j].quantidade);
            getchar();
        }}
        while(strlen(pesquisa)!=0){
        printf("\nDigite o nome da receita a ser buscada");
        fgets(pesquisa,25,stdin);
        int encontrada = 0;
            for (size_t i = 0; i < 5; i++){
            if (strstr(receitas[i].nome, pesquisa) != NULL) {
            encontrada = 1;
            printf("Receita: %s\n", receitas[i].nome);
                printf("Ingredientes:\n");
                for (int j = 0; j < receitas[i].quantosing; j++) {
                printf("  %s: %.2f\n", receitas[i].ingredientes[j].nome, receitas[i].ingredientes[j].quantidade);
                }
            }
          if (encontrada == 0) {
            printf("Receita não encontrada.\n");
        }
       }
}}