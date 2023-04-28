#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "questao01.h"

void entradaQ01(float *r){
    printf("Digite o raio do circulo: ");
    scanf("%f", r);
}

void processamentoQ01(float *r, float *d, float *p, float *a, float *v) {
    float pi = 3.14;

    *d = 2* *r;
    *p = 2*pi* *r;
    *a = pi * pow(*r,2);
    *v = (4/3)*pi* pow(*r,3);
}

void saidaQ01(float *d, float *p, float *a, float *v) {
    system("cls");

    printf("O diametro do circulo eh %.1f\n"
           "O perimetro do circulo eh %.1f\n"
           "A area do circulo eh %.1f u.a\n"
           "Caso esse circulo fosse base de uma esfera, o volume seria %.2f\n\n",
           *d, *p, *a, *v);
}

void questao01(void) {
    float raio, diametro, perimetro, area, volume;

    entradaQ01(&raio);
    processamentoQ01(&raio, &diametro, &perimetro, &area, &volume);
    saidaQ01(&diametro, &perimetro, &area, &volume);
}
