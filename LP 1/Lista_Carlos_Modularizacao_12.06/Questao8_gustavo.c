#include <stdio.h>
#define TAM 10
float triplo(float num){
float trip;
trip=num*3;
return trip;
}


int main(){
float numeros[TAM];
int i;

for(i=0;i<TAM;i++){
    printf("Informe o valor de posicao %i:",i);
    scanf(" %f",&numeros[i]);
}
for(i=0;i<TAM;i++){
    printf("%.2f ",triplo(numeros[i]));
}
return 0;
}
