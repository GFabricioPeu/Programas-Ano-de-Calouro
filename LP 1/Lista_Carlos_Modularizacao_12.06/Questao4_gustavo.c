
#include <stdio.h>


float metade(float nume){
float met;
if(nume>=20){
    met=(nume/2);
    return met;
}
else {
    return 0;
}
}

int main(){
float num,met;

printf("informe o numero:");
scanf("%f",&num);
met = metade(num);
if(met==0){
    printf("Numero invalido");
}
else{
    printf("o metade do valor %f eh: %f",num,met);
}

return 0;
}
