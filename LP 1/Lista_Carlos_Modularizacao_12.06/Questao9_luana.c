#include <stdio.h>

int soma_entre(int n1,int n2){
int soma=0,i;

for(i=n1;i<n2;i++){
    soma = soma+i;
}
return soma;
}

int main(){
int num1,num2;

printf("Informe o primeiro numero:\n");
scanf("%i",&num1);
printf("Informe o segundo numero:\n");
scanf("%i",&num2);

printf("\nA soma dos numeros entre os dois numeros informados eh:%i",soma_entre(num1,num2));
}
