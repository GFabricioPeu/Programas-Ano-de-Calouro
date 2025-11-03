#include <stdio.h>
#include <math.h>
float quadrado(float num){
float quad;
quad = (num*num);
return quad;
}

float raiz(float num){
float ra;
ra = sqrt(num);
return ra;
}

int main(){
float numero;
int tipo;

do{
    printf("Qual funcao deseja usar? Escolha:\n"
           "1: se for elevar ao quadrado     \n"
           "2: se for tirar a raiz quadrada  \n");
    scanf("%i",&tipo);
}while(tipo!=2 && tipo!=1);

printf("Agora informe o valor que sera utilizado na funcao:\n");
scanf("%f",&numero);

if(tipo==1){
    printf("\nO quadrado do numero %.2f eh: %.2f",numero,quadrado(numero));
}
else{
    printf("\nA raiz quadrada do numero %.2f eh: %.2f",numero,raiz(numero));
}
return 0;
}
