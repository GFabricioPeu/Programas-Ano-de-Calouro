#include <stdio.h>
#include <math.h>
int primo(int num){
    if((num==2||num==3)||(num==5||num==7)){
        return 0;
    }
    else if((num%2!=0&&num%3!=0)&&(num%5!=0&&num%7!=0)){
        return 0;
    }
    else{
        return 1;
}
}
float hipotenusa(float n1,float n2){
float hip;
    hip=sqrt((n1*n1)+(n2*n2));
    return hip;
}

float mediaPond(float notas[]){
float med,somaNum=0;
int cont=1;
    while(cont<=4){
        if (cont%2==0){
            somaNum += (notas[cont-1]*3);
        }
        else{
            somaNum += (notas[cont-1]*2);
        }
        cont++;
    }
med = (somaNum/10);
return med;
}

int main(){
int tam=4,op,i,numP,fim=0;
float n1,n2,notas[tam];

while(fim==0){
    printf(" Escolha uma opcao:                                     "
       "\n1: Calcular a HIPOTENUSA                              "
       "\n2: Calcular a MEDIA PONDERADA                         "
       "\n3: Verificar se um numero eh primo                    "
       "\n(digite qualquer outro valor para encerrar o programa)\n");
    scanf("%i",&op);

switch(op){
    case 1:
        printf("Informe o primeiro cateto:\n");
        scanf("%f",&n1);
        printf("Informe o segundo cateto:\n");
        scanf("%f",&n2);
        printf("\nA hipotenusa tem tamanho:%f\n",hipotenusa(n1,n2));
        break;

    case 2:
        for(i=0;i<tam;i++){
            printf("\nInforme a nota %i\n",i+1);
            scanf("%f",&notas[i]);
        }
        printf("\nA media ponderada eh:%f\n",mediaPond(notas));
        break;
    case 3:
        printf("\nInforme um numero que deseja saber se e primo ou nao:\n");
        scanf("%i",&numP);
        if(primo(numP)==0){
            printf("\nO numero %i eh primo\n",numP);
        }
        else{
            printf("\nO numero %i nao eh primo\n",numP);
        }
        break;
    default:
       printf("Programa encerrado!");
       fim++;
    }
}
return 0;
}
