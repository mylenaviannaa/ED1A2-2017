/* 
 * File:   pilhaestatica.h
 * Author: aluno
 *
 * Created on 24 de Outubro de 2017, 19:17
 */

#ifndef PILHAESTATICA_H
#define	PILHAESTATICA_H



#ifdef	__cplusplus
extern "C" {
#endif

#define SIM 1
#define NAO 0
#define SUCESSO 0
#define MAX_ELEM 10
#define PILHA_VAZIA -1
#define PILHA_CHEIA -2
    
    
    struct Pilha{
        int topo;
        char elem[MAX_ELEM];
    };

    
    int vazia (struct Pilha);
    int cheia (struct Pilha);
    void iniciarPilha(struct Pilha*);
    char obterTopo (struct Pilha);
    void listaElementos (struct Pilha);
    int inserir (struct Pilha*, char);
    char remover (struct Pilha*);
    int palindrome(struct Pilha);

#ifdef	__cplusplus
}
#endif

#endif	/* PILHAESTATICA_H */

