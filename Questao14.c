//QUESTAO 14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct{
char marca[15];
int ano;
long int preco;
}Carro;
void main(){
    Carro carros[5];
    int p = 50000;
    for (size_t i = 0; i < 5; i++)
    {
        printf("Digite a marca do carro %d: ",i+1);
        fgets(carros[i].marca, 15, stdin);
        printf("Digite o ano do carro %d: ",i+1);
        scanf("%d",&carros[i].ano);
        printf("Digite o preco do carro %d: ",i+1);
        scanf("%ld",&carros[i].preco);
        getchar();

    }
    for (size_t i = 0; i < 5; i++)
    {
    if(carros[i].preco > p){
    printf(" Marca do carro: %s, Ano do carro: %d, Preco do carro: %d\n",carros[i].marca, carros[i].ano, carros[i].preco);
    }
    }
    
}