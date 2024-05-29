//QUESTAO 7
#include <stdio.h>
#include <math.h>
void polarcartesiano(float raio, float arg, float *x, float *y){
    *x = raio * cos(arg);
    *y = raio * sin(arg);
}
void main(){
    float x,y,arg,raio;
    printf("Valor do raio: ");
    scanf("%f", &raio);
    printf("Valor do argumento em radianos: ");
    scanf("%f", &arg);
    polarcartesiano(raio, arg, &x, &y);
    printf("Convertido em cartesiano: x = %.2f, y = %.2f\n", x, y);
}