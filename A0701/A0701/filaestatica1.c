#include <stdio.h>
#include <stdlib.h>
#include "filaestatica1.h"

int vazia(struct Fila f){
    if(f.tamanho == 0){
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila f){
    if(f.tamanho == MAX_ELEM){
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* f){
    int i;
    for(i=0; i<MAX_ELEM; i++){
        f->elem[i] = ELEM_NULO;
    }
    f->tamanho = 0;
}

char obterInicio(struct Fila f){
    char dado = ELEM_NULO;
    if(!vazia(f)){
        dado = f.elem[0];
        return dado;      
    }
    
}


void listarElementos(struct Fila f){
    int i;
    
    if(vazia(f)){
        printf("\n\n FILA VAZIA");
    }else{
        printf("\n\n--------------Listando a FILA--------------\n");
        for(i=0; i<f.tamanho;i++){
            printf("\n [%i] = %c",i,f.elem[i]);
        }
    }
}

int inserir (struct Fila* f, char e){
    if(!cheia(*f)){
        f->elem[f->tamanho]= e;
        f->tamanho++;
    }else{
        return FILA_CHEIA;
    }
    return SUCESSO;
}

char remover(struct Fila* f){
    int i;
    char e = ELEM_NULO;
    e = obterInicio(*f);
    if(e != ELEM_NULO){
        for(i=0;i<(f->tamanho-1);i++){
            f->elem[i] = f->elem[i+1];
            f->elem[f->tamanho-1]= ELEM_NULO;
            f->tamanho--;
        }
    }
    return e;
}