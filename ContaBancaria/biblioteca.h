/* 
 * File:   biblioteca.h
 * Author: aluno
 *
 * Created on 5 de Setembro de 2017, 17:31
 */

#ifndef BIBLIOTECA_H
#define	BIBLIOTECA_H



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
    struct Conta{
        int numConta;
        char nome[30];
        float saldo;
    };

    void abrirConta (struct Conta *c);
    void lancarCredito (struct Conta *c);
    void lancarDebido (struct Conta *c);
    void exibirSaldo (struct Conta *c);


#endif	/* BIBLIOTECA_H */

