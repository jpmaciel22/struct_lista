#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char descricao[100];
} Compromisso;

void main() {
    Data data = {22, 1, 2005};
    Horario horario = {15, 46, 20};
    Compromisso compromisso = {data, horario, ""};
    strcpy(compromisso.descricao, "Meu aniversário");

    printf("Compromisso: %s\n", compromisso.descricao);
    printf("Data: %2d/%2d/%4d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horário: %2d:%2d:%2d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
}
