#include <stdio.h>

void contagem_regressiva(int num){
int i;
for(i=num;i=0;i--){
    printf(" %i",i);
 }
}

int main(){
int n;
printf("Informe o inicio da contagem regressiva:");
scanf("%i",&n);
contagem_regressiva(n);
}
