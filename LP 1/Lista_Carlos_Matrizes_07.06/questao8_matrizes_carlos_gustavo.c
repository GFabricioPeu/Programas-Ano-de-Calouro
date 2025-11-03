#include <stdio.h>
//Gustavo8
int main(){
int matA[3][3],matB[3][3],matSOMA[3][3];
int i,j;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("Informe o valor da posicao %i,%i da matrizA: ",i,j);
    scanf("%i",&matA[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("Informe o valor da posicao %i,%i da matrizB: ",i,j);
    scanf("%i",&matB[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    matSOMA[i][j]=matA[i][j]+matB[i][j];
    printf(" %i ",matSOMA[i][j]);
    }
 printf("\n");
}

}
