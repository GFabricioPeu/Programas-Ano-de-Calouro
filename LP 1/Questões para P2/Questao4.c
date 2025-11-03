#include<stdio.h>

void col_lin_nula(int matriz[][3],int vetLin[],int vetCol[],int *tamCol_nula,int *tamLin_nula){
int i,j,somaLinha=0,somaColuna=0,contLin=0,contCol=0;

 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        somaLinha = somaLinha+matriz[i][j];

    }
        if(somaLinha==0){
            vetLin[contLin]=i;
            contLin++;
        }
    somaLinha=0;
 }

 for(j=0;j<3;j++){
    for(i=0;i<3;i++){

        somaColuna= somaColuna + matriz[i][j];
    }
        if(somaColuna==0){
            vetCol[contCol]=j;
            contCol++;
        }
    somaColuna=0;
 }
*tamCol_nula=contCol;
*tamLin_nula=contLin;
}

int main(){
int mat[3][3],vetLin[3],vetCol[3];
int tamCol_nula=0,tamLin_nula=0,i,j;

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("Informe o valor de posicao %i,%i da matriz",i,j);
        scanf("%i",&mat[i][j]);
    }
  }
col_lin_nula(mat,vetLin,vetCol,&tamCol_nula,&tamLin_nula);

    if(tamLin_nula!=0){
        printf("\nA(s) linha(s) nula(s) sao:");
        for(i=0;i<tamLin_nula;i++){
            printf(" %i ",vetLin[i]);
        }
    }
    else{
        printf("\nNao ha linha(s) nula(s):");
    }

    if(tamCol_nula!=0){
        printf("\nA(s) coluna(s) nula(s):");
        for(i=0;i<tamCol_nula;i++){
            printf(" %i ",vetCol[i]);
        }
    }
    else{
        printf("\nNao ha coluna(s) nula(s)");
    }
return 0;
}

