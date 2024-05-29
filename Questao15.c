//QUESTAO 15
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct{
    char titulo[30];
    char autor[15];
    int ano;
}Livro;
void main(){
    Livro livros[5];
    char nomep[100];
    for(int i = 0; i < 5; i++){
    printf("Digite o titulo do livro %d: ",i+1);
    fgets(livros[i].titulo,30,stdin);
    printf("Digite o nome de quem escreveu o livro %d: ",i+1);
    fgets(livros[i].autor,15,stdin);
    printf("Digite o ano de lançamento do livro %d: ",i+1);
    scanf("%d", &livros[i].ano);
    getchar();
    }
    int pesquisa = 0;
    printf("Digite o nome que quer pesquisar: ");
    fgets(nomep,100,stdin);
     for (int i = 0; i < 5; i++) {
        if (strstr(livros[i].titulo, nomep) != NULL) { // pesquisando dentro de livros[i].titulo, o que for digitado em nomep
            printf("Livro encontrado:\n");
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            pesquisa = 1;
        }
        
}if(pesquisa = 0){
    printf("Livro nao encontrado");
}

}