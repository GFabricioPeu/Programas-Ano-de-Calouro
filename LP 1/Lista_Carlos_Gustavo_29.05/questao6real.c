int main(){
int i,vetorA[12],pos1,pos2;

for(i=0;i<12;i++){
    printf("\nDigite um numero:");
    scanf("%i",&vetorA[i]);
}
    do{
     printf("\nInforme a primeira posicao");
     scanf("%i",&pos1);
    }while(pos1<0||pos1>11);
    do{
     printf("\nInforme a segunda posicao");
     scanf("%i",&pos2);
    }while(pos2<0||pos2>11);
    printf("A soma dos numeros eh %i",(vetorA[pos1]+vetorA[pos2]));

    return 0;
}
