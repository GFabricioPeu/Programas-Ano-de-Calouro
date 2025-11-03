#include <stdio.h>
int fatorial(int num);

int main(){
int numero;

printf("Digite o numero que deseja fatorar:\n");
scanf(" %i",&numero);

printf("O fatorial do numero %i eh: %i",numero,fatorial(numero));

return 0;
}

int fatorial(int num){
int fat=1,i;
for(i=2;i<=num;i++){
    fat=fat*i;
}
return fat;
}
