#include <stdio.h>

int main(){
int i,j,cont=0,a,b,somaDP=0,somaDS=0,somaL=0,somaC=0,acertou=0;
int tab[3][3];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        tab[i][j]=8;
    }
}
while(acertou!=1){
somaDP=0;somaDS=0;somaC=0;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%i",tab[i][j]);
    }
    printf("\n");
  }

    printf("escolha a linha do lugar que deseja marcar(1,2 ou 3):\n");
    scanf("%i",&a);
    printf("escolha a linha do lugar que deseja marcar(1,2 ou 3):\n");
    scanf(" %i",&b);
       if(cont%2==0){
        tab[a-1][b-1]=0;
       }
       else{
        tab[a-1][b-1]=1;
       }
       cont++;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      somaL+=tab[i][j];
        if(j==i){
        somaDP+=tab[i][j];
        }
        else if(i+j==3){
        somaDS+=tab[i][j];
        }
     }
      if(somaL==0||somaL==3){
        acertou++;
        }
      somaL=0;
  }
   for(j=0;j<3;j++){
     for(i=0;i<3;i++){
     somaC+=tab[i][j];
    }
    if(somaC==0||somaC==3){
        acertou++;
    }
    somaC=0;
  }
  if(somaDP==0||somaDP==3){
    acertou++;
  }
  else if(somaDS==0||somaDS==3){
    acertou++;
  }
}
printf("Fim de jogo");
 return 0;
}
