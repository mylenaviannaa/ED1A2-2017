/* 
 * File:   filaestatica2.c
 * Author: aluno
 *
 * Created on 21 de Novembro de 2017, 21:13
 */

#include <stdio.h>
#include <stdlib.h>
#include "filaestatica2.h"

int vazia(struct Fila f) {
    if (f.inicio == FILA_VAZIA) {
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila f) {
    if ((f.inicio == 0 && f.fim == MAX_ELEM - 1) || (f.inicio == f.fim + 1)) {
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* f) {
    int i;
    for (i = 0; i < MAX_ELEM; i++) {
        f->elem[i] = 0;
    }
    f->fim = FILA_VAZIA;
    f->inicio = FILA_VAZIA;
            
}

char obterInicio(struct Fila f) {
    char dado = 0;
    if (!vazia(f)) {
        dado = f.elem[f.inicio];
    }
    return dado;
}

void listarElementos(struct Fila f) {
    int i;
    if (vazia(f)) {
        printf("\n\n Fila vazia");
    } else {
        printf("\n\n --------- Conteudo da Fila ----------");
        for (i = f.inicio; i <= f.fim; i=((i + 1) % MAX_ELEM)) {
            printf("\n %c", f.elem[i]);
            
        }
    }
}

int inserir(struct Fila* f, char e) {
    if((f->inicio==0 && f->fim==MAX_ELEM+1)|| (f->inicio==f->fim+1)){
        printf("FILA CHEIA\n");
    }else{
      if(f->inicio==FILA_VAZIA){
          f->inicio++;
        }
      f->fim = (f->fim +1) % MAX_ELEM;
      f->elem[f->fim]= e;
    }
   
}

char remover(struct Fila* f) {
    char e = ELEM_NULO;
    if (!vazia(*f)) {
        e = obterInicio(*f);
        f->elem[f->inicio] = ELEM_NULO;
        if (f->inicio == f->fim) {
            f->inicio = FILA_VAZIA;
            f->fim = FILA_VAZIA;
        } else {
            f->inicio = (f->inicio + 1) % MAX_ELEM;
        }
    }
    return e;
}

int tamanho(struct Fila f) {
    if (f.inicio <= f.fim) {
        return f.fim - f.inicio + 1;
    }
    return ((MAX_ELEM - f.inicio)+(f.fim + 1));
}

