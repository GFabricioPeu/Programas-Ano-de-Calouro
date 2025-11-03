#include <stdio.h>

int par_impar(int num){
if(num%2==0){
    return 0;
}
else{
    return 1;
}
}

int main(){
int numero;

printf("Digite o numero:");
scanf("%i",&numero);

if(par_impar(numero)==0){
    printf("Numero par");
}
else{
   printf("Numero impar");
}
return 0;
}
