/* 
 * File:   listalinearestatica.h
 * Author: aluno
 *
 * Created on 26 de Setembro de 2017, 16:19
 */

#ifndef LISTALINEARESTATICA_H
#define	LISTALINEARESTATICA_H

#include <stdio.h>
#include <stdlib.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define MAX_ELEM 10
#define POS_FINAL -1
#define NAO_ENCONTRADO -1
    
    struct Lista{
        int n;
        char elem[MAX_ELEM];
    };

    void iniciarLista(struct Lista*);
    char acessar (struct Lista, int);
    void alterar (struct Lista*, int,char);
    void inserir (struct Lista*,int,char);
    void remover (struct Lista*,int);
    void concatenar (struct Lista*, struct Lista*);
    void inverter (struct Lista*);
    struct Lista sublista(struct Lista, int, int);
    void inserirOrdenando (struct Lista*,char);
    void mostrarLista (struct Lista);
    int  localizarElem(struct Lista, char);
    
    

#ifdef	__cplusplus
}
#endif

#endif	/* LISTALINEARESTATICA_H */

