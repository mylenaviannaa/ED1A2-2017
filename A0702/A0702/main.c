/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 25 de Novembro de 2017, 08:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "filaestatica2.h"

/*
 * 
 */
int main(int argc, char** argv) {

    struct Fila fila;
    int op;


    do {
        printf("\n\n-- TESTE DE FILAS CIRCULARES -- \n\n");
        printf("Digite qual e a opçao desejada?\n\n");
        printf("1- Iniciar uma fila\n");
        printf("2- Inserir um valor na fila\n");
        printf("3- Remover um valor da fila\n");
        printf("4- Obter o topo da fila\n");
        printf("5- Verificar se a fila está vazia\n");
        printf("6- Verificar se a fila está cheia\n");
        printf("7- Listar os elementos da fila\n");
        printf("8- Obter o tamanho da lista \n\n");
        printf("9- Sair\n");
        scanf("%d", &op);
        switch (op) {

            case 1:
                iniciarFila(&fila);
                printf("\nA fila foi iniciada!\n");
                listarElementos(fila);
                break;

            case 2:
                inserir(&fila, 'f');
                printf("\nInserido!\n");
                inserir(&fila, 'i');
                printf("\nInserido!\n");
                inserir(&fila, 'l');
                printf("\nInserido!\n");
                inserir(&fila, 'a');
                printf("\nInserido!\n");
                listarElementos(fila);
                break;

            case 3:
                remover(&fila);
                listarElementos(fila);
                break;

            case 4:
                printf("%c",obterInicio(fila));
                break;

            case 5:
                printf("\nA fila esta vazia?\n");
                if(vazia(fila))
                    printf("SIM");
                else
                    printf("NAO");
                break;

            case 6:
                printf("\nA fila esta cheia?\n");
                if(cheia(fila))
                    printf("SIM");
                else
                    printf("NAO");
                break;

            case 7:
                listarElementos(fila);
                break;

            case 8:
                printf("%i",tamanho(fila));
                

        }
    } while (op != 9);
    return (EXIT_SUCCESS);
}

