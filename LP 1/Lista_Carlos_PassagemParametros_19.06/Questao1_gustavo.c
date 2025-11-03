#include <stdio.h>
#include <math.h>

float raiz(float *numero){

*numero=sqrt(*numero);

}

int main(){
float numero;

printf("Digite o numero que deseja tirar a raiz quadrada:");
scanf("%f",&numero);

raiz(&numero);

printf("A raiz quadrada eh: %.2f",numero);

return 0;
}


