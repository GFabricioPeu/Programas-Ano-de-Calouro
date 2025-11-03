#include <stdio.h>

int soma(int vet[],int tamanho){
int sum=0,i;
for(i=0;i<tamanho;i++){
    sum = sum+vet[i];
}
return sum;
}

void separacao(int vet[],int vetPar[],int vetImpar[],int tam,int *tamImpar,int *tamPar){
int i,contPar=0,contImpar=0;

for(i=0;i<tam;i++){

    if(vet[i]%2==0){
        vetPar[contPar]=vet[i];
        contPar++;
    }
    else if(vet[i]%2==1){
        vetImpar[contImpar]=vet[i];
        contImpar++;
    }
}
*tamImpar = contImpar;
*tamPar = contPar;
}



int main(){
int tam = 10,i;
int tamPar,tamImpar;
int vet[tam],vetImpar[tam],vetPar[tam];

for(i=0;i<tam;i++){
    printf("Informe o valor da posicao %i: ",i);
    scanf("%i",&vet[i]);
}

separacao(vet,vetPar,vetImpar,tam,&tamImpar,&tamPar);

  printf("\nOs valores pares do vetor sao:\n");
  for(i=0;i<tamPar;i++){
    printf("%i ",vetPar[i]);
  }
  printf("\nA soma do vetor par eh: %i",soma(vetPar,tamPar));

  printf("\nOs valores impares do vetor sao:\n");
  for(i=0;i<tamImpar;i++){
    printf("%i ",vetImpar[i]);
  }
  printf("\nA soma do vetor impar eh: %i",soma(vetImpar,tamImpar));
}
