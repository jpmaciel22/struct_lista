//QUESTAO 5
#include <stdio.h>
typedef struct {
    float x;
    float y;
    float z;
}Vetor;

Vetor soma_vetores(Vetor vetor1, Vetor vetor2){
 Vetor resultado;
 resultado.x = vetor1.x + vetor2.x;
 resultado.y = vetor1.y + vetor2.y;
 resultado.z = vetor1.z + vetor2.z;
 return resultado;
}

void main(){
    Vetor vetor1 = {10,20,30};
    Vetor vetor2 = {4,5,6};
    Vetor resultado = soma_vetores(vetor1,vetor2);
    printf("A soma dos vetores (%.2f, %.2f, %.2f) e (%.2f, %.2f, %.2f) resulta em (%.2f, %.2f, %.2f)\n", 
           vetor1.x, vetor1.y, vetor1.z, 
           vetor2.x, vetor2.y, vetor2.z, 
           resultado.x, resultado.y, resultado.z);
}
