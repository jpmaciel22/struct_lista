//QUESTAO 18
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
} Produto;
void main(){
    Produto produtos[5];
     for (int i = 0; i < 5; i++) {
        printf("Digite o codigo do produto %d: ", i+1);
        scanf("%d", &produtos[i].codigo);
        getchar();
        printf("Digite o nome do produto %d: ", i+1);
        fgets(produtos[i].nome, 15, stdin);
        printf("Digite o preco do produto %d: ", i+1);
        scanf("%f", &produtos[i].preco);
        printf("Digite a quantidade do produto %d: ", i+1);
        scanf("%d", &produtos[i].quantidade);
    }
    int codigopesquisa = 1, quantidadepesquisa = 1;
       while (codigopesquisa != 0) {
        printf("\nDigite o codigo do produto do pedido (0 encerra o programa): ");
        scanf("%d", &codigopesquisa);
        printf("Digite a quantidade do pedido: ");
        scanf("%d", &quantidadepesquisa);
        int encontrado = 0;
        for (int i = 0; i < 5; i++) {
        if (produtos[i].codigo == codigopesquisa) {
        encontrado = 1;
        if (produtos[i].quantidade >= quantidadepesquisa) {
        produtos[i].quantidade -= quantidadepesquisa;
        printf("Pedido encontrado.\n");
        } else {
        printf("Não há mais esse produto em estoque\n");
        }
        break;
        }
        }
        
        if (!encontrado) {
            printf("Produto nao encontrado.\n");
        }
    }
}