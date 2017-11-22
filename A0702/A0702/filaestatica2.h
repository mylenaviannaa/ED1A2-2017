/* 
 * File:   filaestatica2.h
 * Author: aluno
 *
 * Created on 21 de Novembro de 2017, 21:10
 */

#ifndef FILAESTATICA2_H
#define	FILAESTATICA2_H

#define SIM 1
#define NAO 0
#define SUCESSO 0
#define MAX_ELEM 10
#define FILA_VAZIA -1
#define FILA_CHEIA -2
#define ELEM_NULO 0



#ifdef	__cplusplus
extern "C" {
#endif

 struct Fila{
        int inicio;
        int fim;
        char elem [MAX_ELEM];
    };

    
    int vazia(struct Fila);
    int cheia(struct Fila);
    void iniciarFila (struct Fila*);
    char obterInicio(struct Fila);
    void listarElementos (struct Fila);
    int inserir(struct Fila*, char);
    char remover (struct Fila*);
    int tamanho (struct Fila);



#ifdef	__cplusplus
}
#endif

#endif	/* FILAESTATICA2_H */

