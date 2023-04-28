#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "questao03.h"

void entradaQ03(int *compra, int *pago) {
    printf("Insira o valor da compra: ");
    scanf("%d", compra);

    printf("Insira o valor do pagamento: ");
    scanf("%d", pago);
}

void processamentoQ03(int *compra, int *pago, int *troco, int *nota_1, int *nota_10, int *nota_100, int *rest, bool *rtn) {
    *troco = *pago - *compra;

    if (*troco < 0) {
        *rtn = false;
    } else {
        *rtn = true;

        *nota_100 = *troco/100;
        *rest = *troco%100;
        *nota_10 = *rest/10;
        *rest = *rest%10;
        *nota_1 = *rest;
    }
}

void saidaQ03(int *nota_1, int *nota_10, int *nota_100, bool *rtn) {
    system("cls");
    if (*rtn == true) {
        printf("Quantidade de notas de 100: %d\n"
           "Quantidade de notas de 10: %d\n"
           "Quantidade de notas de 1: %d\n\n", *nota_100, *nota_10, *nota_1);
    } else {
        printf("Pagamento negado\n\n");
    }

}

void questao03(void) {
    int valor_compra, valor_pago, valor_troco,
        nota1, nota10, nota100, restante;
    bool retorno;

    system("cls");
    entradaQ03(&valor_compra, &valor_pago);
    processamentoQ03(&valor_compra, &valor_pago, &valor_troco, &nota1, &nota10, &nota100, &restante, &retorno);
    saidaQ03(&nota1, &nota10, &nota100, &retorno);
}
