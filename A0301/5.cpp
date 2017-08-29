#include <stdio.h>
#include <stdlib.h>


int main() {
    int matriz[5][5];
    float vetorC[5];
    float vetorL[5];
    
    int c,l,somaL, somaC;
    
    for(c=0;c<5;c++){
        
        
        for(l=0;l<5;l++){
            somaL =0;
            
            printf("Informe o valor para a %d %s %d %s",c+1," coluna e para a ",l+1," linha :");
            scanf("%d",&matriz[c][l]);
            
            somaL = somaL + matriz[c][l];
            vetorL[l] = vetorL[l] + somaL;  
                
            somaC = 0;
            somaC = somaC + matriz[c][l];
            vetorC[c] = vetorC[c] + somaC;
        }  
    }


    
    printf("\nMATRIZ INFORMADA");
    for(c=0;c<5;c++){
        printf("\n");
        for(l=0;l<5;l++){
            printf(" %d ",matriz[c][l]);
        }
    }
    
    printf("\n");
    printf("\nSOMA DE CADA LINHA");
    for(c=0;c<5;c++){
            printf("\n%f",vetorC[c]);
    }
    
    printf("\n");
    printf("\nSOMA DE CADA COLUNA");
    for(l=0;l<5;l++){
            printf("\n%f",vetorL[l]);
    }
    return 0;
}

