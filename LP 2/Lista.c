#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{

    struct no *prox;
    int valor;

}No;

typedef struct {

    No *Inicio;
    int tam;

}Lista;

void CriaFila(Lista *l){
    l->Inicio = NULL;
    l->tam = 0;
}

int PreencheValor(){
    int valor;

    printf("\nInforme o valor que deseja adicionar no No:\n");
    scanf("%i",&valor);
    return valor;
}


void Inverte(Lista *l){
    No *Proximo = NULL;
    No *Atual = l->Inicio;
    No *Anterior = NULL;

    while(Atual != NULL){

        Proximo = Atual->prox;
        Atual->prox = Anterior;
        Anterior = Atual;
        Atual = Proximo;
    }

    l->Inicio = Anterior;

}




void RetiraNo(Lista *l,int valor){
    No *Aux = l->Inicio;
    No *Prev = NULL;
    
    if(l->Inicio){
        while(Aux && Aux->valor != valor){
            Prev = Aux;
            Aux = Aux->prox;
        }

    }
    else{
        printf("\nLista Vazia");
    }
}

void LimpaLista(Lista *l){
    No *Aux;

    if(l->Inicio){
        while(l->Inicio){
            Aux = l->Inicio;
            l->Inicio = Aux->prox;
            free(Aux);
        };
        printf("Lista limpa");
    }
    else{
        printf("A lista ja esta vazia");
    }
}


void AdicionaNo(Lista *p){
    No *NovoNo = malloc(sizeof(No));
    No *Aux = p->Inicio;

    if(NovoNo){
         NovoNo->valor = PreencheValor();
        if(Aux){
            if(Aux->valor > NovoNo->valor){
                p->Inicio = NovoNo;
                NovoNo->prox = Aux;
                p->Inicio = NovoNo;
            }
            else{
                while(NovoNo->valor > Aux->prox->valor && Aux->prox != NULL){
                        Aux = Aux->prox;
                    }
                    NovoNo->prox = Aux->prox;
                    Aux->prox = NovoNo;
                }
        }
        else{
        p->Inicio = NovoNo;
        NovoNo->prox = NULL;
        }
    }
    else{
        printf("Erro na alocacao de novo no");
    }

}

int main(){

    Lista l;
    int valorBusca;
    char escolha;

    CriaFila(&l);

    do{
        printf("\nA-Adiciona valor a lista\nR-Retira valor da lista\nP-Pesquisar\nF-Fechar programa\n");
        scanf(" %c",&escolha);

        switch(escolha){
        case 'A':
        case 'a':
            AdicionaNo(&l);
            break;

        case 'R':
        case 'r':
            RetiraNo(&l,valor);
            break;

        case 'P':
        case 'p':
            printf("\nDigite o valor que deseja buscar na lista\n");
            scanf("%i",&valorBusca);
            Pesquisa(&l,valorBusca);
            break;

        default:
            printf("Escolha invalida, tente novamente");
            
        }




    }while(escolha != 'f' && escolha != 'F');
    LimpaLista(&l);

}