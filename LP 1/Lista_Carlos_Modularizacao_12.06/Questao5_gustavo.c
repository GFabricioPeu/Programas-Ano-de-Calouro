#include <stdio.h>
int multiplo(int num){
if(num%3==0){
    return 1;
}
else{
    return 0;
}
}

int main(){
int num;

printf("Digite um numero:");
scanf("%i",&num);

switch(multiplo(num)){

case 1:
    printf("O numero e multiplo de 3");
    break;
case 0:
    printf("O numero nao eh multiplo de 3");


}
return 0;
}
