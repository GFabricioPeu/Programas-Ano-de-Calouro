#include <stdio.h>

void media(float notas[],float *maior, float *menor){
int i;
*maior=notas[0];
*menor=notas[0];
for(i=0;i<5;i++){
    if(*maior < notas[i]){
        *maior=notas[i];
    }
    else if(*menor>notas[i]){
        *menor=notas[i];
    }
}
}

int main(){
float notas[5];
float maior,menor;
int i;

for(i=0;i<5;i++){
    printf("Informe a media do aluno %i\n",i+1);
    scanf("%f",&notas[i]);
}
media(notas,&maior,&menor);
printf("\nA maior nota foi %.2f e a menor foi %.2f",menor,maior);

return 0;
}

