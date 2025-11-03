#include <stdio.h>
//Gustavo9
int main(){
int mat[4][4];
int i,j,soma=0;

for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    printf("Informe o valor da posicao %i,%i da matriz: ",i,j);
    scanf("%i",&mat[i][j]);
    if((j+1)%2==0){
        soma=soma+mat[i][j];
    }
    }
}
printf("a soma das colunas pares eh %i",soma);
return 0;
}
