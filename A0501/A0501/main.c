#include <stdio.h>
#include <stdlib.h>
#include "listalinearestatica.h"

int main(int argc, char** argv) {

    struct Lista l;
    struct Lista l2;
    int op;
    char i;

    do {
        printf("\n\nInforme a opçao desejada:");
        printf("\n1- Iniciar Lista");
        printf("\n2-Inserir elemento na lista");
        printf("\n3-Inserir elemento na lista Ordenando");
        printf("\n4- Acessar um elemento");
        printf("\n5- Alterar elemento");
        printf("\n6- Remover  elemento");
        printf("\n7- Inverter lista");
        printf("\n8- Mostrar lista");
        printf("\n9- Extrair um sub lista da lista");
        printf("\n10- Concatenar duas ou mais listas");
        printf("\n11- Localizar elemento ");
        printf("\n12-Sair");
        printf("\n----------------:");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\n\n Iniciando:");
                iniciarLista(&l);
                mostrarLista(l);
                break;

            case 2:
                printf("\n\n Inserindo:");
                inserir(&l, POS_FINAL, 'M');
                inserir(&l, POS_FINAL, 'Y');
                inserir(&l, POS_FINAL, 'L');
                inserir(&l, POS_FINAL, 'E');
                inserir(&l, POS_FINAL, 'N');
                inserir(&l, POS_FINAL, 'A');
                mostrarLista(l);
                break;

            case 3:
                printf("\n\n Inserindo Oredenado:");
                inserirOrdenando(&l, 'N');
                mostrarLista(l);
                break;

            case 4:
                printf("\n\n Acessando:");
                i = acessar(l, 2);
                printf("\n Encontrei %c na posicao 2 ",i);
                i = acessar(l, 11);
                
                mostrarLista(l);
                break;

            case 5:
                printf("\n\n Alterando:");
                alterar(&l, 2, 'B');
                alterar(&l, 30, 'C');
                mostrarLista(l);
                break;

            case 6:
                printf("\n \n Removendo:");
                remover(&l, 5);
                remover(&l, 11);
                mostrarLista(l);
                break;

            case 7:
                printf("\n\n Antes de Inverter:");
                mostrarLista(l);
                inverter(&l);
                printf("\n\n Invertendo:");
                mostrarLista(l);
                break;

            case 8:
                mostrarLista(l);
                break;

            case 9:
                l2 = sublista(l, 3, 2);
                mostrarLista(l2);
/*
                l2 = sublista(l, 11, 11);
*/
                break;

            case 10:
                concatenar(&l, &l2);
                mostrarLista(l);
                break;

            case 11:
                localizarElem(l, 'E');
                localizarElem(l, 'Y');
                mostrarLista(l);
                break;


        }
    } while (op != 12);
}
