#include <stdio.h>

float fahrenheitToCelcius(float fah){
float cel;
cel = ((fah - 32)*5)/9;
return cel;
}

int main(){
float fahrein,i;
for(i=0;i<=300;i+=10){
    printf("%.2f ",fahrenheitToCelcius(i));
}
return 0;
}
