/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 5 de Setembro de 2017, 16:35
 */

#include"biblioteca.h"

int main(int argc, char** argv) {
    struct Livro l1;
    struct Livro l2;
    struct Aluno a;
    
    strcpy(l1.titulo,"Aprendendo a programar em C");
    strcpy(l1.autor,"Osvandre A. Martins");
    strcpy(l1.assunto,"Programaçao de computadores");
    l1.numTombo = 54321;
    l1.numExs = 5;
    
    
    strcpy(l2.titulo,"Estruturas de Dados");
    strcpy(l2.autor,"Osvandre A. Martins");
    strcpy(l2.assunto,"Estrutura de Dados e Algoritmo");
    l2.numTombo = 123654;
    l2.numExs = 10;
    
    mostrarLivro(&l1);
    mostrarLivro(&l2);
    
    a.matricula = 11111;
    strcpy(a.nome,"Jose da silva");
    strcpy(a.endereco,"Rua xxxx 123");
    strcpy(a.fone,"(11) 1111-1111");
    
    mostrarAluno(&a);
    
    return 0;
}

void mostrarLivro(struct Livro *l){
    printf("\n----------------LIVRO-----------\n");
    printf("\nTitulo :%s",l->titulo);
    printf("\nAutor :%s",l->autor);
    printf("\nAssunto :%s",l->assunto);
    printf("\nNº de Tombo :%d",l->numTombo);
    printf("\n Nº de Exemplares :%d",l->numExs);
}

void mostrarAluno (struct Aluno *al){
    printf("\n -----------------ALUNO-----------------");
    printf("\n Matricula : %d",al->matricula);
    printf("\n Nome: %s",al->nome);
    printf("\n Endereco: %s",al->endereco);
    printf("\n Telefone: %s",al->fone);
}