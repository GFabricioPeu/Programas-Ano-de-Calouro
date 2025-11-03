#include <stdio.h>

int main(){

int soma=0,vetorX[5],i,vetorY[5],cont=0,f;

for(i=0;i<5;i++){
    printf("Digite um numero:");
    scanf(" %i",&vetorX[i]);
        if ((vetorX[i]%2) != 0){
        soma=soma+vetorX[i];
        vetorY[cont]=vetorX[i];
        cont++;
    }
}
printf("os numeros impares foram:");
for(f=0;f<cont;f++){
    printf("%d ",vetorY[f]);
}
printf("\ne a soma deles eh %i",soma);

return 0;
}
