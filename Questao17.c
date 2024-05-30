//QUESTAO 17
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    float potencia;
    float tempoahrs;
    char nome[15];
} Eletrodomestico;
void main(){
Eletrodomestico e[5];
for (size_t i = 0; i < 5; i++)
{
    printf("Digite a potencia do seu eletrodomestico %d: ",i+1);
    scanf("%f",&e[i].potencia);
    printf("Digite o tempo ativo em horas do seu eletrodomestico %d: ",i+1);
    scanf("%f",&e[i].tempoahrs);
    getchar();
    printf("Digite o nome do seu eletrodomestico %d: ",i+1);
   fgets(e[i].nome,15,stdin);

}
float consumototal = 0;
float consumo[5];
float consumorelativo[5];
for (size_t i = 0; i < 5; i++)
{
    consumo[i] = e[i].potencia * e[i].tempoahrs;
    consumototal += consumo[i];
}
printf("O consumo total é: %.2f\n", consumototal);
for (size_t i = 0; i < 5; i++)
{
    consumorelativo[i] = consumo[i]/consumototal;
    printf("\nO consumo relativo do seu eletrodomestico %sé: %.2f \n",e[i].nome, consumorelativo[i]);
}


}