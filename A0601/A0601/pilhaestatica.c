/* 
 * File:   pilhaestatica.c
 * Author: aluno
 *
 * Created on 24 de Outubro de 2017, 19:23
 */

#include <stdio.h>
#include <stdlib.h>

#include "pilhaestatica.h"

int vazia(struct Pilha p) {
    if (p.topo == PILHA_VAZIA) {
        printf("\n PILHA VAZIA");
        return SIM;
    }
    return NAO;
}

int cheia(struct Pilha p) {
    if (p.topo == (MAX_ELEM - 1)) {
        printf("\n PILHA CHEIA");
        return SIM;
    }
    return NAO;
}

void iniciarPilha(struct Pilha* p) {
    int i;
    for (i = 0; i < MAX_ELEM; i++) {
        p->elem[i] = 0;
    }
}

char obterTopo(struct Pilha p) {
    if (p.topo == PILHA_VAZIA) {
        printf("\n ERRO!! Pilha VAZIA");
    } else {
        return p.topo;
    }
}

void listaElementos(struct Pilha p) {
    int i;
    if (p.topo == PILHA_VAZIA) {
        printf("\n ERRO!! Pilha VAZIA");
    } else {
        for (i = 0; i < MAX_ELEM; i++) {
            printf("\n%c", p.elem[i]);
        }
    }
}

int inserir(struct Pilha* p, char e) {
    if (p->topo == PILHA_CHEIA) {
        printf("\n PILHA CHEIA");
        return PILHA_CHEIA;
    } else {
        p->topo++;
        p->elem[p->topo] = e;
        return SUCESSO;
    }
}

char remover(struct Pilha* p) {
    if (p->topo == PILHA_VAZIA) {
        printf("\n PILHA VAZIA");
        return PILHA_VAZIA;
    } else {
        return p->elem;
        p->elem[p->topo] = 0;
        p->topo--;
    }
}
