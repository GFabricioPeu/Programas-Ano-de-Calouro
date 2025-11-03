#include <stdio.h>

int main(){
int vetorA[12],i,y;
for(i=0;i<12;i++){
    printf("Digite um numero (%d): ",i+1);
    scanf("%i",&vetorA[i]);
    }
for(i=0;i<6;i++){
    y=vetorA[i];
    vetorA[i] = vetorA[11-i];
    vetorA[11-i]=y;
}
for(i=0;i<12;i++){
    printf("\nO valor do vetor na posicao %i eh: %i",i,vetorA[i]);
}
return 0;
}
