#include <stdio.h>

void coluna_vetor(int mat[][5],int vet[],int col){
    int i;
    for(i=0;i<5;i++){
        vet[i]=mat[i][col];
    }
}

int main(){
    int mat[5][5],vet[5];
    int coluna,i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Informe o valor da posicao %i,%i: ",i,j);
            scanf("%i",&mat[i][j]);
        }
    }
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%i",mat[i][j]);
        }
        printf("\n");
    }

    printf("\nEscolha a coluna que deseja passar para o vetor (0,1 ou 2):  ");
    scanf("%i",&coluna);

    coluna_vetor(mat,vet,coluna);

    printf("Os valores em vetor da coluna escolhida sao:\n");
        for(i=0;i<5;i++){
            printf(" %i ",vet[i]);
        }
}

