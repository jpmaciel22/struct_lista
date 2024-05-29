//QUESTAO 13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    char nome[20];
    char cidade[30];
    char email[30]; 
    long int cep;
    char nascimento[11];
    char endereco[30];
} Cliente;
void main(){
Cliente cliente;
printf("Digite o seu nome: ");
fgets(cliente.nome,20,stdin);
printf("Digite a sua data de nascimento: ");
fgets(cliente.nascimento,11,stdin);
printf("Digite o seu email: ");
fgets(cliente.email,30,stdin);
printf("Digite a sua cidade: ");
fgets(cliente.cidade,30,stdin);
printf("Digite o seu CEP: ");
scanf("%ld",&cliente.cep);
getchar();
printf("Digite o seu endereco: ");
fgets(cliente.endereco,30,stdin);
printf("%s, %s, %s, %s, %ld, %s", cliente.nome, cliente.nascimento, cliente.email, cliente.cidade, cliente.cep, cliente.endereco);
  char *at = strchr(cliente.email, '@');
    if (!at || at == cliente.email || strchr(at + 1, '@')) {
        printf("Email nao valido.");}}
