#include "Fila.h"

header *cria_header(void){
    header *h = (header*) malloc(sizeof(header));

    h -> primeiro = NULL;
    h -> ultimo = NULL;

    return h;
}

void cria_fila(header *h, int num){
    fila *x = (fila*) malloc(sizeof(fila));

    if(h -> primeiro == NULL){
        h -> primeiro = x;
        h -> ultimo = x;
        x -> num = num;
        x -> proximo = NULL;
    }

    x -> num = num;
    h -> ultimo -> proximo = x;
    h -> ultimo = x;
    x -> proximo = NULL;
}

void printa_fila(header *h){
    fila *p = h -> primeiro;

    while(p != NULL){
        printf("Num: %d\n", p -> num);
        p = p -> proximo;
    }
}

void limpa_fila(header *h){
    fila *p = h -> primeiro;
    fila *aux;

    while(p != NULL){
        aux = p -> proximo;
        free(p);
        p = aux;
    }

    free(h);
}


