#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[10][60];
	char end[10][70];
	int i,i2,i3,n;
	
	for(i=0;i<10;i++){
		printf("Informe o %d nome:",i);
		gets(nome[i]);
	}
	for(i2=0;i2<10;i2++){
		printf("Informe %d o endereco",i2);
		gets(end[i2]);
	}
	do {
		printf("Informe um numero (0 a 9)");
		scanf("%d",&n);
	}while(n<0 && n>9);
	
	if(n==0){
		printf("Nome %s | Endereco %s",nome[0],end[0]);
	}else{
		 if (n==1){
		 printf("Nome %s | Endereco %s",nome[1],end[1]);	
		}else{
			if(n==2){
				printf("Nome %s | Endereco %s",nome[2],end[2]);
			}else{
				if(n==3){
					printf("Nome %s | Endereco %s",nome[3],end[3]);
				}else{
					if(n==4){
					printf("Nome %s | Endereco %s",nome[4],end[4]);	
					}else{
						if(n==5){
							printf("Nome %s | Endereco %s",nome[5],end[5]);
						}else{
							if(n==6){
								printf("Nome %s | Endereco %s",nome[6],end[6]);
							}else{
								if(n==7){
									printf("Nome %s | Endereco %s",nome[7],end[7]);
								}else{
									if(n==8){
										printf("Nome %s | Endereco %s",nome[8],end[8]);
									}else{
										if(n==9){
											printf("Nome %s | Endereco %s",nome[9],end[9]);
										}else{
											printf("Numero Invalido");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
