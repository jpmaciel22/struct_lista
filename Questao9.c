//QUESTAO 9
#include <stdio.h>
#include <math.h>
typedef struct {
    double real;
    double imag;
} Complexo;
void main() {
    Complexo z, w, soma, subtracao, produto, somareal;
    Complexo somaimag, subtracaoreal, subtracacaoimag, multiplicacaoreal, multiplicacaoimag, divisaoreal, divisaoimag;
    double moduloZ, moduloW;
    printf("Digite a parte real de z: ");
    scanf("%lf", &z.real);
    printf("Digite a parte imaginária de z: ");
    scanf("%lf", &z.imag);
    printf("Digite a parte real de w: ");
    scanf("%lf", &w.real);
    printf("Digite a parte imaginária de w: ");
    scanf("%lf", &w.imag);

    // Realização das operações
    somareal = z.real + w.real;
    somaimag  = z.imag + w.imag;
    subtracaoreal  = z.real - w.real;
    subtracacaoimag  = z.imag - w.imag;
    multiplicacaoreal =   z.real * w.real - z.imag * w.imag;
    multiplicacaoimag =  z.real * w.imag + z.imag * w.real;
    moduloZ = sqrt(z.real * z.real + z.imag * z.imag);
    moduloW = sqrt(w.real * w.real + w.imag * w.imag);

    // Exibição dos resultados
    printf("\nResultados das operações:\n");
    printf("Soma: ");
   printf("%2.f",somareal);
    printf("%2.f",somaimag);
    printf("Subtração: ");
        printf("%2.f",subtracaoreal);
        printf("%2.f",subtracacaoimag);
    printf("Produto: ");
        printf("%2.f",multiplicacaoreal);
        printf("%2.f",multiplicacaoimag);
    printf("Módulo de z: %.2lf\n", moduloZ);
    printf("Módulo de w: %.2lf\n", moduloW);

    return 0;
}