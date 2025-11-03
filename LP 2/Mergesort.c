#include <stdio.h>
#include <stdlib.h>

int floor(int val){



}

void merge(int vet,int inicio,int meio,int fim){
    int *temp,p1,p2,tamanho,i,j,k;
    int fim1 = 0,fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *)malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i=0;i<tamanho;i++){
            if(!fim1 && !fim2){
                if(vet[p1] < vet[p2]){
                    temp[i] = vet[p1++];
                }
                else{
                    temp[i] = vet[p2++];
                }
                if(p1>meio){
                    fim1 = 1;
                }
                if(p2>fim){
                    fim2 = 1;
                }
            }
        }
    }




}

void mergesort(int vet,int inicio, int fim){
    int meio;

    if(inicio<fim){
        meio = floor((inicio+fim)/2);
        mergesort(vet,inicio,meio);
        mergesort(vet,meio+1,fim);
        merge(vet,inicio,meio,fim);

    }
}


int main(){





    return 0;
}