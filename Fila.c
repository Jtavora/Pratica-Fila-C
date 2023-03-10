#include "Fila.h"

int main(){

    header *h = cria_header();
    int quant, num;

    printf("Digite quantos numeros deseja adicionar a fila: ");
    scanf("%d", &quant);

    for(int i = 0; quant > i; i++){
        printf("Digite o numero que deseja adicionar: ");
        scanf("%d", &num);
        cria_fila(h, num);
    }

    printa_fila(h);

    limpa_fila(h);

    return 0;
}