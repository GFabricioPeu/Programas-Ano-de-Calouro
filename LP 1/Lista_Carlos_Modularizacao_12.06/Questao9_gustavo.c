#include <stdio.h>
int entre(int n1,int n2){
int i;
printf("Os numeros entre esse intervalo eh:");
for(i=n1+1;i<n2;i++){
    printf("%i ",i);
}

}

int main(){
int num1,num2;

printf("Informe o inicio do intervalo:");
scanf("%i",&num1);
printf("Informe o fim do intervalo:");
scanf("%i",&num2);

entre(num1,num2);
}
