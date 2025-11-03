#include <stdio.h>

void imprimir_pares(int num1,int num2){
int i;
    for(i=num1;i<=num2;i++){
        if (i%2==0){
            printf("%i ",i);
        }
    }
}


int main(){
int numero1,numero2;

printf("Digite o inicio do intervalo:");
scanf("%i",&numero1);
printf("Digite o fim do intetervalo");
scanf("%i",&numero2);

imprimir_pares(numero1,numero2);
return 0;
}
