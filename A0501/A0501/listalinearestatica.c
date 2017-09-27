#include <stdio.h>
#include <stdlib.h>
#include "listalinearestatica.h"

void iniciarLista(struct Lista* lst) {
    int i;
    lst -> n = 0;
    for (i = 0; i < MAX_ELEM; i++) {
        lst -> elem[i] = 0;
    }
}

char acessar(struct Lista lst, int k) {
    char dado = 0;
    if ((k < 0 || k > (lst.n - 1))) {
        printf("\n ERRO ao Acessar - Lista vazia ou indice fora dos limites!!");
    } else {
        dado = lst.elem[k];
    }
    return dado;
}

void alterar(struct Lista* lst, int k, char dado) {
    if ((k < 0 || k > (lst-> n - 1))) {
        printf("\n ERRO ao alterar - Lista vazia ou indice fora dos limites!!");
    } else {
        lst-> elem[k] = dado;
    }
}

void inserir(struct Lista* lst, int k, char dado) {
    int i;
    if (lst->n >= MAX_ELEM) {
        printf("\n ERRO ao inserir - Lista cheia");
    } else {
        if (k == POS_FINAL || lst->n == 0) {
            lst->elem [lst->n] = dado;
            lst ->n++;
        } else {
            if ((k == POS_FINAL || lst -> n == 0)) {
                printf("\n ERRO ao inserir na posicao k - Indice fora dos limites!");
            } else {
                for (i = lst->n; i > k; i--) {
                    lst->elem[i] = lst->elem[i - 1];
                }
                lst->elem[k] = dado;
                lst->n++;
            }
        }
    }
}

void remover(struct Lista* lst, int k) {
    int i;
    if (k == POS_FINAL) {
        lst->elem[(lst->n) - 1] = 0;
        lst->n--;
    } else {
        if ((k < 0 || k > (lst->n - 1))) {
            printf("\n ERRO ao excluir - Lista vazia ou indice fora dos limites");
        } else {
            for (i = k; i < lst->n; i++) {
                lst->elem[i] = lst->elem[i + 1];
            }
            lst->n--;
            lst->elem[lst->n] = 0;
        }
    }
}

void concatenar(struct Lista* lstl, struct Lista* lst2) {
    int i, limite;
    if ((lstl->n + lst2) <= MAX_ELEM) {
        limite = lst2-> n;
    } else {
        limite = MAX_ELEM - lstl-> n;
        for (i = 1; i <= limite; i++) {
            lstl->elem[lstl->n] = lst2->elem[i - 1];
            lstl->n++;
        }
    }
}

void inverter(struct Lista* lst) {
    int i;
    char aux;
    for (i = 0; i < (lst->n - 1) / 2; i++) {
        aux = lst -> elem[i];
        lst->elem[i] = lst->elem[lst->n - (i + 1)];
        lst->elem[lst->n - (i + 1)] = aux;
    }
}



struct Lista sublista(struct Lista lst, int k, int n) {
    struct Lista result;
    int i;
    int limite;
    iniciarLista(&result);

    if ((k < 0 || k > (MAX_ELEM - 1))) {
        printf("\n ERRO ao definir sublista - Origem vazia ou indice alem dos limite");
    } else {
        if ((k + n) <= MAX_ELEM) {
            limite = n;
        } else {
            limite = MAX_ELEM - k;
            for (i = 1; i <= limite; i++) {
                inserir(&result, POS_FINAL, lst.elem[k]);
                k++;
            }
        }

    }
    return result;
}

void inserirOrdenando(struct Lista* lst, char e){
    int k = 0;
    while((e >= lst->elem[k]) && (k<lst->n)){
        k++;
    }
    inserir(lst,k,e);
}

void mostrarLista(struct Lista lst){
    int k;
    printf("\n -----------------Lista de Caracteres------------------\n");
    for(k=0; k<(lst.n); k++){
        printf("\n L[%d] = %c",k,lst.elem[k]);
                
    }
}

int localizarElem(struct Lista lst,char elem){
    int r = NAO_ENCONTRADO;
    int i;
    
    for(i=0; i <= (lst.n -1); i++){
        if(lst.elem[i]== elem){
            r=i;
            break;
        }
    }
    return r;
}
