#include <stdlib.h>
#include <stdio.h>

typedef struct Header
{
    struct Fila *primeiro;
    struct Fila *ultimo;
}header;

typedef struct Fila
{
    struct Fila *proximo;
    int num;
}fila;

header *cria_header(void);
void cria_fila(header *h, int num);
void printa_fila(header *h);
void limpa_fila(header *h);