//QUESTAO 12
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    char *naipe;
    char *valor;
} Carta;
void main(){
Carta baralho[64];
Carta j1[5];
Carta j2[5];
srand(time(NULL));
char *naipes[] = {"Copas", "Ouros", "Espadas", "Paus"};
char *valores[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei", "Ás"};
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            baralho[i * 8 + j].naipe = naipes[i];
            baralho[i * 8 + j].valor = valores[j];
        }
    }
    for (int i = 64 - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }
    for (int i = 0; i < 5; i++) {
        j1[i] = baralho[i];
        j2[i] = baralho[i + 5];
    }
     for (int i = 0; i < 5; i++) {
        printf("%s de %s\n", j1[i].valor, j1[i].naipe);
    }
         for (int i = 0; i < 5; i++) {
        printf("%s de %s\n", j2[i].valor, j2[i].naipe);
    }
    printf("\n");
}

