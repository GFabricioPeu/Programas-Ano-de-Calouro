#include <stdio.h>


int fat(int num){
int fatorial;
if(num==0){
    return 1;
}
else if(num>0){
    fatorial = num*fat(num-1);
    return fatorial;
}
}


int main(){
int numero;

numero=5;

printf("\n%i",fat(numero));


}
