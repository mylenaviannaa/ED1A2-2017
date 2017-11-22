/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 24 de Outubro de 2017, 19:15
 */

#include <stdio.h>
#include <stdlib.h>

#include "pilhaestatica.h"

/*
 * 
 */
int main(int argc, char** argv) {

    struct Pilha pilha; 
    int op;
    

    do{
        printf("\n\n-- TESTE DE PILHAS ESTATICAS -- \n\n");
        printf("Digite qual e a opçao desejada?\n\n");
        printf("1- Iniciar uma pilha\n"); 
        printf("2- Inserir um valor na pilha\n"); 
        printf("3- Remover um valor da pilha\n");
        printf("4- Obter o topo da pilha\n");
        printf("5- Verificar se a pilha está vazia\n");
        printf("6- Verificar se a pilha está cheia\n");
        printf("7- Listar os elementos da pilha\n");
        printf("8- Verificar se existe um palindromo\n");
        printf("9- SAIR\n\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                iniciarPilha(&pilha);
                printf("\nA pilha foi iniciada!\n");
                listaElementos(pilha);
                break;
            case 2:
                inserir(&pilha, 'p');
                printf("\nInserido!\n");
                inserir(&pilha, 'i');
                printf("\nInserido!\n");
                inserir(&pilha, 'l');
                printf("\nInserido!\n");
                inserir(&pilha, 'h');
                printf("\nInserido!\n");
                inserir(&pilha, 'a');
                printf("\nInserido!\n");
                listaElementos(pilha);
                break;
            case 3:
                remover(&pilha);
                printf("\nRemovido do topo!\n");
                listaElementos(pilha);
                break;
            case 4:
                obterTopo(pilha);
                printf("\nDado removido do topo!\n");
                break;
            case 5:
                printf("\nA pilha esta vazia?\n");
                vazia(pilha);
                break;
            case 6:
                printf("\nA pilha esta cheia?\n");
                cheia(pilha);
                break;
            case 7:
                listaElementos(pilha);
                break;
            case 8:
                printf("\n Palindromo:");
                palindrome(pilha);
                break;
            case 9:
                printf("ENCERRANDO!!!");
        }
    }while(op!=9);
    
     
        return (EXIT_SUCCESS);
}

