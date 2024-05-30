//QUESTAO 19
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    int corigem;
    int cdestino;
} Voo;
typedef struct {
    int codigo;
    int saindo;
    int chegando;
} Aeroporto;
void main(){
    Voo voos[5];
    Aeroporto aeroportos[5];
        for (int i = 0; i < 5; i++) {
        aeroportos[i].codigo = i;
        aeroportos[i].saindo = 0;
        aeroportos[i].chegando = 0;
    }
for (int i = 0; i < 5; i++) {
printf("Digite o codigo do aeroporto de origem do voo %d: ", i+1);
scanf("%d", &voos[i].corigem);
printf("Digite o codigo do aeroporto de destino do voo %d: ", i+1);
scanf("%d", &voos[i].cdestino);
        for (int j = 0; j < 5; j++) {
            if (aeroportos[j].codigo == voos[i].corigem) {
                aeroportos[j].saindo++;
            }
            if (aeroportos[j].codigo == voos[i].cdestino) {
                aeroportos[j].chegando++;
            }
        }
    }
for (int i = 0; i < 5; i++) {
printf("Aeroporto %d: %d voos saem, %d voos chegam\n", aeroportos[i].codigo, aeroportos[i].saindo, aeroportos[i].chegando);
    }
}