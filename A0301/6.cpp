#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int matriz [3][3];
	int i,j;
	
	for (j=0;j<3;i++){
		for(i=0;i<3;i++){
		    printf("Informe o valor para a %d %s %d %s",j," coluna e para a ",i," linha :");
		    scanf("%d",matriz[j][i]);

		}
	}
	
	printf("\n Matriz Informada");
	for (j=0;j<3;i++){
		for(i=0;i<3;i++){
			printf("%d",matriz[j][i]);
		}
	}
	
	printf("\n Matriz Transpostas");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",matriz[i][j]);
		}
	}
	
	return 0;
}
