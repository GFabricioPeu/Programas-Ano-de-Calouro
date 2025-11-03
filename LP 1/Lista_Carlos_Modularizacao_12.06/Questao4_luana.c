#include <stdio.h>

float celciuToFahrenheit(float cel){
float fah;
fah = ((cel*9)/5) + 32;
return fah;
}

int main(){
float celcius,i;
for(i=0;i<=100;i+=10){
    printf("%.2f ",celciuToFahrenheit(i));
}
return 0;
}
