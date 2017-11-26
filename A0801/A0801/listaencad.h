/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaencad.h
 * Author: mylena
 *
 * Created on 26 de Novembro de 2017, 15:26
 */

#ifndef LISTAENCAD_H
#define LISTAENCAD_H

#ifdef __cplusplus
extern "C" {
#endif

    struct No {
        int dado;
        struct No *prox;
    };


    struct No2 {
        int dado;
        struct No2 *prox;
        struct No2 *ant;
    };

    void montarListaSimples();
    void listarListaSimples();
    void montarListaDupla();
    void listarListaDupla();



#ifdef __cplusplus
}
#endif

#endif /* LISTAENCAD_H */

