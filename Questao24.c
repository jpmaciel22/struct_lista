//QUESTAO 24
#include <stdio.h>
#include <string.h>
typedef struct{
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[50];
    char cep[10];
    char cidade[50];
    char estado[3];
    char pais[50];
}Endereco;
typedef struct {
    int ddd;
    char numero[15];
}Telefone;
typedef struct {
    int dia;
    int mes;
    int ano;
}Aniversario;
typedef struct {
    char nome[50];
    char email[50];
Endereco endereco;
 Telefone telefone;
Aniversario aniversario;
    char observacoes[100];
}Pessoa;

void main(){
    Pessoa agenda[100];
    int opcao;
      do {
        printf("\nMenu Principal\n");
        printf("1. Busca por primeiro nome\n");
        printf("2. Busca por mês de aniversário\n");
        printf("3. Busca por dia e mês de aniversário\n");
        printf("4. Inserir pessoa\n");
        printf("5. Retirar pessoa\n");
        printf("6. Imprimir dados da pessoa\n");
        printf("7. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: {
                char nomep[50];
                printf("Digite o primeiro nome da pessoa a ser buscada: ");
               fgets(nomep, 50, stdin);
                printf("Resultados da busca por %s:\n", nomep);
                int encontrou = 0;
                for (int i = 0; i < 100; i++) {
                    if (strstr(agenda[i].nome, nomep) != NULL) {
                        printf("Nome: %s\n", agenda[i].nome);
                        printf("Email: %s\n", agenda[i].email);
                        printf("Telefone: (%d) %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
                        printf("Endereço: %s, %d - %s, %s, %s, %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
                        printf("Aniversário: %d/%d/%d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
                        printf("Observações: %s\n", agenda[i].observacoes);
                        encontrou = 1;
                    }
                }
                if (encontrou == 0) {
                    printf("Nenhuma pessoa encontrada com o nome %s.\n", nomep);
                }
                break;
            }
            case 2: {
                int mesp;
                printf("Digite o mês de aniversário (1-12): ");
                scanf("%d", &mesp);
                printf("Pessoas que fazem aniversário no mês %d:\n", mesp);
                int encontrou = 0;
                for (int i = 0; i < 100; i++) {
                    if (agenda[i].aniversario.mes == mesp) {
                        printf("Nome: %s\n", agenda[i].nome);
                        printf("Email: %s\n", agenda[i].email);
                        printf("Telefone: (%d) %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
                        printf("Aniversário: %d/%d/%d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
                        encontrou = 1;
                    }
                }
                if (encontrou == 0) {
                    printf("Nenhuma pessoa encontrada que faz aniversário no mês %d.\n", mesp);
                }
                break;
            }
            
            case 3: {
                int diap, mesp;
                printf("Digite o dia e mês de aniversário (dia mês): ");
                scanf("%d %d", &diap, &mesp);
                printf("Pessoas que fazem aniversário no dia %d/%d:\n", diap, mesp);
                int encontrou = 0;
                for (int i = 0; i < 100; i++) {
                    if (agenda[i].aniversario.dia == diap && agenda[i].aniversario.mes == mesp) {
                        printf("Nome: %s\n", agenda[i].nome);
                        printf("Email: %s\n", agenda[i].email);
                        printf("Telefone: (%d) %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
                        printf("Aniversário: %d/%d/%d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
                        encontrou = 1;
                    }
                }
                if (encontrou == 0) {
                    printf("Nenhuma pessoa encontrada que faz aniversário no dia %d/%d.\n", diap, mesp);
                }
                break;
            }
             case 4: {
                    printf("Inserir nova pessoa:\n");
                    printf("Nome: ");
                    fgets(agenda[100].nome, 50, stdin);
                    printf("Email: ");
                    fgets(agenda[100].email, 100, stdin);
                    printf("Telefone (DDD): ");
                    scanf("%d", &agenda[100].telefone.ddd);
                    printf("Telefone (número): ");
                    fgets(agenda[100].telefone.numero, 15, stdin);
                    printf("Data de Aniversário (dia mês ano): ");
                    scanf("%d %d %d", &agenda[100].aniversario.dia, &agenda[100].aniversario.mes, &agenda[100].aniversario.ano);
                    printf("Endereço (rua): ");
                    fgets(agenda[100].endereco.rua,50,stdin);
                    printf("Endereço (número): ");
                    scanf("%d", &agenda[100].endereco.numero);
                    printf("Endereço (complemento): ");
                    fgets(agenda[100].endereco.complemento,50,stdin);
                    printf("Endereço (bairro): ");
                     fgets(agenda[100].endereco.bairro,50,stdin);
                    printf("Endereço (CEP): ");
                    fgets(agenda[100].endereco.cep,10,stdin);
                    printf("Endereço (cidade): ");
                    fgets(agenda[100].endereco.cidade,50,stdin);
                    printf("Endereço (estado): ");
                   fgets(agenda[100].endereco.estado,3,stdin);
                    printf("Endereço (país): ");
                   fgets(agenda[100].endereco.pais,50,stdin);
                    printf("Observações: ");
                   fgets(agenda[100].observacoes,100,stdin);
                
                break;} 
                case 5: {
                char nremover[50];
                printf("Digite o nome da pessoa a ser retirada: ");
                scanf("%s", nremover);
                int encontrou = 0;
                for (int i = 0; i < 100; i++) {
                    if (strcmp(agenda[i].nome, nremover) == 0) {
                        for (int j = i; j < 100 - 1; j++) {
                            agenda[j] = agenda[j + 1];
                        }
                        encontrou = 1;
                        printf("Pessoa %s retirada da agenda.\n", nremover);
                        break;
                    }
                }
                if (!encontrou) {
                    printf("Pessoa não encontrada na agenda.\n");
                }
                break;
            }
               case 6: {
                char nomei[50];
                printf("Digite o nome da pessoa: ");
                fgets(nomei, 50, stdin);
                int encontrou = 0;
                for (int i = 0; i < 100; i++) {
                    if (strstr(agenda[i].nome, nomei) != NULL) {
                        printf("Nome: %s\n", agenda[i].nome);
                        printf("Email: %s\n", agenda[i].email);
                        printf("Telefone: (%d) %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
                        printf("Endereço: %s, %d - %s, %s, %s, %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
                        printf("Aniversário: %d/%d/%d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
                        printf("Observações: %s\n", agenda[i].observacoes);
                        encontrou = 1;
                        break;
                    }
                }
                if (!encontrou) {
                    printf("Pessoa não encontrada na agenda.\n");
                }
                break;
            }
                      case 7: {
                printf("Saindo do programa.\n");
                break;
            }

            default:
                printf("Opção inválida.\n");
        }
            }while (opcao != 7);
}