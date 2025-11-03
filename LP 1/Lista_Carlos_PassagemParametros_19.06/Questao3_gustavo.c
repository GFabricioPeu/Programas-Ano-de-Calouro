#include <stdio.h>

int reverso(int vet[],int tam){
int aux,i;

for(i=0;i<tam/2;i++){
    aux = vet[i];
    vet[i] = vet[tam-1-i];
    vet[tam-1-i] = aux;
}

}

int main(){
int tam = 5;
int vet[tam],i;

for(i=0;i<tam;i++){
printf("Imforme um valor\n");
scanf("%i",&vet[i]);
}
for(i=0;i<tam;i++){
printf("%i ",vet[i]);
}
reverso(vet,tam);
printf("\n");
for(i=0;i<tam;i++){
printf("%i ",vet[i]);
}
return 0;
}
