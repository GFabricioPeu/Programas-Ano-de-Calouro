#include <stdio.h>
int media(int num1,int num2,int num3){
int med;
med = ((num1+num2+num3)/3);
return med;
}

int main(){
int n1,n2,n3;

printf("Informe o primeiro numero:");
scanf("%i",&n1);
printf("Informe o segundo numero:");
scanf("%i",&n2);
printf("Informe o terceiro numero:");
scanf("%i",&n3);

printf("A media dos numeros %i,%i e %i eh %i ",n1,n2,n3,media(n1,n2,n3));
return 0;
}
