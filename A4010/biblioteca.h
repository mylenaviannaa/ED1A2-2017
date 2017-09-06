/* 
 * File:   biblioteca.h
 * Author: aluno
 *
 * Created on 5 de Setembro de 2017, 17:23
 */

#ifndef BIBLIOTECA_H
#define	BIBLIOTECA_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */

struct Livro{
    char titulo[50];
    char autor[30];
    char assunto[100];
    int numTombo;
    int numExs;
};

 struct Aluno {
    int matricula;
    char nome[30];
    char endereco[100];
    char fone[15];
};

void mostrarLivro(struct Livro *l);
void mostrarAluno (struct Aluno *al);



#ifdef	__cplusplus
}
#endif

#endif	/* BIBLIOTECA_H */

