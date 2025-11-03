#include <stdio.h>
int poten(int b,int e){
int i,aux,po;
aux=b;
for(i=1;i<e;i++){
    b=b*aux;
}
po=b;
return po;
}

int main(){
int base,expoente,result;

printf("Digite a base:\n");
scanf("%i",&base);
printf("Digite o expoente:\n");
scanf("%i",&expoente);

printf("o resultado eh: %i",poten(base,expoente));


}
