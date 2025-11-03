#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    struct no *prox;
    int dado;
}No;

typedef struct{

    No *topo;
    int tam;

}Pilha;

void cria_pilha(Pilha *p){
    p->topo = NULL;
    p->tam = 0;
};
int ler_dado(){
    int dado;
    printf("Escreva o valor:\n");
    scanf("%i",&dado);
    return dado;
}
void empilha(Pilha *p){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->dado = ler_dado();
        novo->prox = p->topo;
        p->topo = novo;
        p->tam++;
    }
    else{
        printf("Falha na alocacao");
    }
}

No* desempilha(Pilha *p){
    
    if(p->topo){
        No *remover = p->topo;
        p->topo = remover->prox;
        p->tam--;
        return remover;
    }
    else{
        printf("Pilha Vazia\n");
        return NULL;
    }
}

void imprimir(Pilha *p){
    No *aux = p->topo;
    printf("\nInicio da Pilha tamanho: %i\n",p->tam);
    while(aux){
        printf("Valor:%i\n",aux->dado);
        aux = aux->prox;
    }
    printf("\nFim da Pilha\n");
}

void busca(Pilha *p,int valor){
    No *aux = p->topo;

    if(aux){
        while(aux){
            if(aux->dado == valor){
                printf("\nValor %i encontrado",valor);
                return;
            }
            aux = aux->prox;
        }
        printf("Valor nao esta na pilha");
    }
    else{
        printf("Pilha Vazia");
    }


}

void limpa(Pilha *p){
    No *remover;
    do{
        remover = p->topo;
        p->topo = remover->prox;
        free(remover);
    }while(p->topo->prox);
    free(p->topo);
    p->topo = NULL;
    p->tam = 0;
    printf("Pilha Limpa");
}

int main(){
int valor,opcao;
Pilha p;
No *remover;
cria_pilha(&p);

do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n4 - Busca\n5 - Limpa Pilha\n");
        scanf("%d",&opcao);

switch(opcao){

case 1:
    empilha(&p);
    break;

case 2:  
    remover = desempilha(&p);

    if(remover){
        printf("\nValor removido com sucessso\n");
        printf("Valor: %i",remover->dado);

        free(remover);
    }
    break;
case 3:

    if(p.topo){
        imprimir(&p);
    }
    else{
        printf("Pilha nao tem valores");
    }

    break;
case 4:

    printf("Informe o valor que deseja encontrar\n");
    scanf("%i",&valor);
    busca(&p,valor);

    break;

case 5:
    limpa(&p);
    break;
default:
    if(opcao != 0){
        printf("Opcao invalida!!!");
    }
}

}while (opcao != 0);






}