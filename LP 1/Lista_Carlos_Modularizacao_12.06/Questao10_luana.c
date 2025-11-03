#include <stdio.h>

int positivo_negativo(int num){
if(num>0){
    return 1;
}
else if(num<0){
    return 0;
}
}

int main(){
int numero;

printf("Informe o numero:\n");
scanf("%i",&numero);

if(positivo_negativo(numero)==1){
    printf("Numero positivo");
}
else if(positivo_negativo(numero)==0){
    printf("Numero negativo");
}

}

