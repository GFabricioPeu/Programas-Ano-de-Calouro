#include <stdio.h>
#define MAX 100
/*Gustavo
int main(){
int mat[MAX][MAX];
int m,n,i,j,prodDP=1,prodDS=1;

printf("informe a quantidade de linhas voce quer na matriz\n");
scanf("%i",&m);
printf("informe a quantidade de colunas voce quer na matriz\n");
scanf("%i",&n);
for(i=0;i<=m-1;i++){
    for(j=0;j<=n-1;j++){
    printf("\ninforme o valor da posicao %i,%i:  ",i,j);
    scanf("%i",&mat[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
     if(j==i){
        prodDP=prodDP*mat[i][j];
        }
     if(i+j==n-1){
        prodDS=prodDS*mat[i][j];
     }

    }
}
printf("\nA determinante da matriz eh:%i",prodDP-prodDS);


return 0;
}
