//QUESTAO 23
#include <stdio.h>
#include <string.h>
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
int main() {
     Data data1, data2;

    printf("Digite a data 1: ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    printf("Digite a data 2: ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
    int resultado = 0;
     for (int i = data1.ano ; i < data2.ano; i++) {
        resultado += 365;
        }
          for (int i = data1.mes; i <= 12; i++) {
        int diasmes = 31;
        if (i == 4 || i == 6 || i == 9 || i == 11) {
            diasmes = 30;
    }else if (i == 2) {
            diasmes = 28;}
            resultado += diasmes;
          }
           for (int i = 1; i < data2.mes; i++) {
        int diasmes = 31;
        if (i == 4 || i == 6 || i == 9 || i == 11) {
            diasmes = 30;
        } else if (i == 2) {
            diasmes = 28;
        }
       resultado += diasmes;
    }
    resultado += data2.dia;

    printf("O número de dias entre as duas datas é: %d\n", resultado);
          
          }