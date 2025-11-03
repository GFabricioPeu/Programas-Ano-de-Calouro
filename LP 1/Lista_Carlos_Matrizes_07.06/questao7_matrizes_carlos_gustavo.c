#include <stdio.h>

//Gustavo7
int main(){
int matA[3][4],matB[3][4];
int i,j;

for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("Informe o valor da posicao %i,%i: ",i,j);
    scanf("%i",&matA[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    matB[i][j]= 3*matA[i][j];
    printf(" %i ",matB[i][j]);
    }
 printf("\n");
}

return 0;
}
