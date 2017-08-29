#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main (){
	
	char nome[10][50];
	int i;
	
	for (i=0;i<10;i++){
		printf("Infome o %d nome",i);
		gets(nome[i]);
	}
	for(i=0;i<10;i++){
		printf("O nome armazenado na posiçao %d foi: %s",i,nome[i]);
	}
	
}
