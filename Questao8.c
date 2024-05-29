//QUESTAO 8
#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[20];
    int idade;
    char sexo; // F ou M
    long cpf;
    char nascimento[11];
    int setor;  //de 0 a 99
    char cargo[30];
    float salario;
} Funcionario;

void main(){
    Funcionario funcionario;
    printf("Digite o nome do funcionario: ");
    fgets(funcionario.nome,20,stdin);
    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario.idade);
    getchar();
    printf("Digite o sexo do funcionário: ");
    scanf("%c", &funcionario.sexo);
    printf("Digite o CPF do funcionario: ");
    scanf("%lf",&funcionario.cpf);
    getchar();
    printf("Digite a data de nascimento do funcionário: ");
    fgets(funcionario.nascimento,11,stdin);
    printf("Digite o setor do funcionario: ");
    scanf("%d",funcionario.setor);
    getchar();
    printf("Digite o cargo do funcionário: ");
    fgets(funcionario.cargo,30,stdin);
    printf("Digite o setor do funcionario: ");
    scanf("%.2f",funcionario.salario);
    printf("\nDados do Funcionário:\n");
    printf("Nome: %s", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %.2lf\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.nascimento);
    printf("Código do Setor: %d\n", funcionario.setor);
    printf("Cargo: %s", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);
}