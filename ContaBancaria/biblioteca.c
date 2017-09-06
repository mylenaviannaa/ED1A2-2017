#include "biblioteca.h"

void abrirConta (struct Conta *c){
    printf("Informe o numero da conta:");
    scanf("%d",&c->numConta);
    printf("Informe o nome:");
    scanf("%s",&c->nome);
    c->saldo=0;
}

void lancarCredito(struct Conta *c){
    float cre;
    printf("Informe o valor de credito");
    scanf("%f",&cre);
    c->saldo = c->saldo + cre;   
}

void lancarDebito (struct Conta *c){
    float deb;
    printf("Informe o valor a ser debidado");
    scanf("%f",&deb);
    
    c->saldo = c->saldo - deb;
}

void exibirSaldo (struct Conta *c){
    printf("Dados e Saldo atual:");
    printf("\nNº da conta: %d",c->numConta);
    printf("\nNome: %s",c->nome);
    printf("\n Saldo: %f",c->saldo);
}
