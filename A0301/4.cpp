#include <stdio.h>
#include <stdlib.h>

int main(){
	int A [5];
	int B [5];
	int C [10];
	
	int i, cont =0;
	
	for(i=0;i<5;i++){
		printf("Informe os valores do vetor A:");
		scanf("%d",A[i]);
	}
	
	for(i=0;i<5;i++){
		printf("Informe os valores do vetor B:");
		scanf("%d",B[i]);
	}
	
	for(i=0;i<10;i++){
		if(i % 2 == 1){
			C[i]=A[i - cont];
			cont = cont + 1;
		}else{
			C[i]=B[i/2];
		}
	}
	
	for(i=0;i<10;i++){
		printf("\n %d",C[i]);
	}
	return 0;
} 
