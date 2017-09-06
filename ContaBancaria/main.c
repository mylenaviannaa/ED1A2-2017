/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 5 de Setembro de 2017, 17:31
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


/*
 * 
 */
int main(int argc, char** argv) {

    struct Conta c;
    
    int op;
    do{
    printf("Informe a opçao desejada:");
    printf("\n1- Abrir conta");
    printf("\n2- Lançar credito");
    printf("\n3- Lançar debido");
    printf("\n4- Exibir Saldo");
    printf("\n5- Sair");
    scanf("%d",&op);
    
    if(op==1){
        abrirConta(&c);
    }else{
        if(op==2){
            lancarCredito(&c);
        }else{
            if(op==3){
                lancarDebido(&c);
            }else{
                if(op==4){
                    exibirSaldo(&c);
                }
            }
        }
    }
    
    }while(op!=5);
    return 0;
}


