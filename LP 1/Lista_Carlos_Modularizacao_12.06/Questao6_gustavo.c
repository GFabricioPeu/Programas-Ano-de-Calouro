#include <stdio.h>
void triplo(int tam,int numeros[tam]){
int i;
for(i=0;i<tam;i++){
    numeros[i]=3*numeros[i];
}
}

int main(){
int tam,i;
printf("Digite quantos numeros deseja informar:");
scanf("%i",&tam);
int numeros[tam];

for(i=0;i<tam;i++){
    printf("informe um numero:\n");
    scanf("%i",&numeros[i]);
}
triplo(tam,numeros);
for(i=0;i<tam;i++){
    printf("%i ",numeros[i]);
}
return 0;
}

