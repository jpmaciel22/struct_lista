//QUESTAO 22
#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[50];
    int idade;
    char sexo;
    float salario;
} Cadastro;

int main() {
    Cadastro pessoas[5];
    for (int i = 0; i < 5; i++) {
        printf("Cadastro da pessoa  %d:\n", i + 1);
        printf("Digite o nome: ");
        fgets(pessoas[i].nome, 50, stdin);
        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Digite o salário: ");
        scanf("%f", &pessoas[i].salario);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &pessoas[i].sexo);
    }
    Cadastro maisvelho = pessoas[0];
    for (int i = 1; i < 5; i++) {
        if (pessoas[i].idade > maisvelho.idade) {
            maisvelho = pessoas[i];
        }
    }
    printf("\nPessoa mais velha:\n");
    printf("Nome: %s, Idade: %d, Sexo: %c, Salário: %.2f\n", maisvelho.nome, maisvelho.idade, maisvelho.sexo, maisvelho.salario);
    printf("\nHOMENS :\n");
    for (int i = 0; i < 5; i++) {
        if (pessoas[i].sexo == 'M') {
            printf("Nome: %s, Idade: %d, Salário: %.2f\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].salario);
        }
    }
    printf("\nPessoas com salário maior que 1000:\n");
    for (int i = 0; i < 5; i++) {
        if (pessoas[i].salario > 1000) {
            printf("Nome: %s, Idade: %d, Sexo: %c\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
        }
    }
    char identidade[50];
    printf("\nDigite o nome da pessoa que deseja buscar: ");
    fgets(identidade, 50, stdin);
    int encontrado = 0;
    for (int i = 0; i < 5; i++) {
        if (strstr(pessoas[i].nome, identidade) != NULL) {
            printf("\nDados da pessoa com identidade '%s':\n", identidade);
            printf("Idade: %d, Sexo: %c, Salário: %.2f\n", pessoas[i].idade, pessoas[i].sexo, pessoas[i].salario);
            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0) {
        printf("Pessoa com identidade '%s' não encontrada.\n", identidade);
    }

    printf("\nPrograma encerrado.\n");
    return 0;