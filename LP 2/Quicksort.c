 #include <stdio.h>
 #include <stdlib.h>




int particiona(int vet[],int inicio,int final){
    int esq,dir,pivo,aux;

    esq = inicio;
    dir = final;
    pivo = vet[inicio];

    while(esq<dir){
            while(vet[esq]<=pivo){
                esq++;
            }
            while(vet[dir]>pivo){
                dir--;
            }
            if(esq<dir){
                aux = vet[esq];
                vet[esq] = vet[dir];
                vet[dir] = aux;
        }
    }
    vet[inicio] = vet[dir];
    vet[dir] = pivo;

    return dir;


}

void quicksort(int vet[], int inicio,int fim){
    int pivo;
    if(fim>inicio){
        pivo = particiona(vet,inicio,fim);
        quicksort(vet,inicio,pivo-1);
        quicksort(vet,pivo+1,fim);
    }


}

void mostra(int vet[]){
    int i;
printf("\n");
    for(i=0;i<5;i++){

        printf("%i, ",vet[i]);

    }
printf("\n");
}

int main(){

    int vet[5] = {2,4,5,6,1};

    mostra(vet);

    quicksort(vet,0,4);

    mostra(vet);

}