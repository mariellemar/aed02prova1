#include<stdio.h>
#include<stdlib.h>
#include "questao02.h"

void entradaQ02(float *bruto) {
    printf("Informe o salario bruto: ");
    scanf("%f", bruto);
}

void processamentoQ02(float *bruto, float *liquido) {
    if (*bruto<2000.0) {
        *liquido = *bruto - (*bruto *0.1);
    } else {
        *liquido = *bruto - (*bruto *0.2);
    }
}

void saidaQ02(float *liquido) {
    printf("O salario liquido eh R$%.2f", *liquido);
}

void questao02(void) {
    float salarioBruto, salarioLiq;

    entradaQ02(&salarioBruto);
    processamentoQ02(&salarioBruto, &salarioLiq);
    saidaQ02(&salarioLiq);
}
