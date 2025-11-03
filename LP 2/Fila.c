#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int valor;
    struct no *prox;

}No;

typedef struct{

    No *inicio;
    No *fim;
    int tam;

}Fila;

int PreencheInt(){
    int valor;

    printf("\nAdicione um valor ao novo no\n");
    scanf("%i",&valor);
    return valor;
}

void CriaFila(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tam = 0;
}

void AdicionaNo(Fila *f){
    No *NovoNo = malloc(sizeof(No));
    NovoNo->valor = PreencheInt();
    NovoNo->prox = NULL;


    if(f->inicio){
        f->fim->prox = NovoNo;
        f->fim = NovoNo;
        
    }
    else{
        f->fim = NovoNo;
        f->inicio = NovoNo;
        
    }
    f->fim->prox = f->inicio;
    f->tam++;
}

void MostraFila(Fila *f){
    No *Aux;
    Aux = f->inicio;
    
    if(f->inicio){

        printf("\nFila de tamanho: %i\n",f->tam);
        printf("Inicio da fila-> ");
        do{
    	    printf("%i, ",Aux->valor);
            Aux = Aux->prox;
        }while(Aux != f->inicio);
    }
    else{
        printf("\nFila vazia\n");
    }
    printf("\n");
}

void RetiraNo(Fila *f){
    No *Aux;
    
    if(f->inicio){
        Aux = f->inicio;
        if(f->inicio == f->fim){
            f->fim = NULL;
            f->inicio = NULL;
        }
        else{
            f->inicio = Aux->prox;
            f->fim->prox = f->inicio;
        }
        printf("\nValor retirado: %i",Aux->valor);
        free(Aux);
        f->tam--;
    }
    else{
        printf("\nA fila esta vazia");
    }
}

void LimpaFila(Fila *f){
    while(f->inicio){

        RetiraNo(f);
           
    }
    printf("\nFila limpa");

}


int main(){
    Fila f;
    char escolha;

    CriaFila(&f);

    do{
        printf("\nMenu de escolha:                  "
               "\nA- Adiciona um novo No            "
               "\nR- Retira o No no inicio da fila  "
               "\nF- Acaba o programa             \n");

        MostraFila(&f);  
        scanf(" %c",&escolha);

        if(escolha == 'a' || escolha == 'A' ){
            AdicionaNo(&f);
        }
        else if(escolha == 'R' || escolha == 'r'){
            RetiraNo(&f);
        }
        else if(escolha == 'f'|| escolha == 'F'){
            printf("Finalizando o programa");
            LimpaFila(&f);
        }
        else{
            printf("Escolha invalida");
        }


    }while(escolha != 'f' && escolha != 'F');

    return 0;
}