/*
----------------EXERCICIO DA P1----------------
Data: 17/11/2024

Materia: Laboratorio De Programação 2
Professor: Adailton José Alves da Cruz

Aluno: Gabriel Fabricio Meirelles Peu

*/
#include <stdio.h>
#include <stdlib.h>

//Estrutura do nó
typedef struct no{

    struct no *prox; //Aponta para o proximo nó da pilha
    int num; //Guarda o numero no nó

}No;

//Estrutura da pilha
typedef struct{

    No *topo; //Ponteiro para o nó no topo da fila
    int tam; //Indica o tamanho da pilha (detalhe arbitrario)

}Pilha;

//Prototipação das funções
void CriaPilha(Pilha *p);
void MostraPilha(Pilha *p);
void CriaNo(Pilha *p);
void EsvaziaPilha(Pilha *p);
void AdicionaNumero(Pilha *p, int valor);
void Subtrai(Pilha *p);
void Soma(Pilha *p);
void Multiplica(Pilha *p);
void Divide(Pilha *p);


int main (){

    Pilha p; //Declara uma variavel para a Pilha
    char escolha; //Variavel para a escolha
    int valorint; //Variavel paar um valor numerico

CriaPilha(&p); //Inicializa a pilha

do{

    printf("\n   --------------------CALCULADORA---------------------" //Menu de escolha
           "\n   |Opcoes:                                           |"
           "\n   |E- Adiciona um novo numero a pilha da calculadora |"
           "\n   |C- Esvazia a pilha                                |"
           "\n   |F- Sai do programa                                |"
           "\n   |                                                  |"
           "\n   |-Apos apertar E, digite um algarismo para         |"
           "\n   |adicionar ao numero existente na pilha            |"
           "\n   |                                                  |"
           "\n   |-Escreva um operador(-,+,/,*) para fazer essa     |"
           "\n   |operacao com os dois numeros em cima da pilha     |"
           "\n   ----------------------------------------------------");

    MostraPilha(&p); //Mostra a situação atual da pilha 

    printf("\n");

    scanf(" %c",&escolha); //Le a escolha do usuario

    // Processa a escolha feita
    switch(escolha){

        case 'E':
        case 'e':
            CriaNo(&p); //Cria um novo nó na pilha
            break;
    
        case 'C':
        case 'c':
            EsvaziaPilha(&p); //Esvazia por completo a Pilha
            break;

        case 'F':
        case 'f':
            printf("\nPrograma finalizado"); //Condição de fim do programa
            break;
        
        case'-':
            
            if(p.topo){
                if(p.topo->prox){
                    Subtrai(&p); //Subtrai os dois valores no topo da pilha
                }
                else{
                    printf("\nImpossivel realizar a operacao com um so valor");
                }
            }
            else{
                printf("\nAdicione um valor a pilha primeiro");
            }
            break;

        case'+':
           
            if(p.topo){
                if(p.topo->prox){
                    Soma(&p); //Soma dois valores do topo da pilha
                }
                else{
                    printf("\nImpossivel realizar a operacao com um so valor");
                }
            }
            else{
                printf("\nAdicione um valor a pilha primeiro");
            }
            break;

        case'*':
            if(p.topo){
                if(p.topo->prox){
                    Multiplica(&p); //Multiplica dois valores do topo da pilha
                }
                else{
                    printf("\nImpossivel realizar a operacao com um so valor");
                }
            }
            else{
                printf("\nAdicione um valor a pilha primeiro");
            }
            break;
        
        case'/':
            
            if(p.topo){
                if(p.topo->prox){
                    Divide(&p);//Divide dois valores do topo da pilha
                }
                else{
                    printf("\nImpossivel realizar a operacao com um so valor");
                }
            }
            else{
                printf("\nAdicione um valor a pilha primeiro");
            }
            break;

        case '0': case'1': case'2': case'3': case'4': case'5': case'6': case'7': case'8': case'9':
            if(p.topo){
                valorint = escolha - '0'; //Tranforma o numero escolhido em um int
                AdicionaNumero(&p,valorint); //Adiciona um digito ao valor do topo da pilha
            }
            else{
                printf("\nEscolha a opcao de adicionar um numero primeiro");
            }
            break;
        
        default:
            printf("\nOpcao invalida tente novamente");
    };
    
}while(escolha != 'f' && escolha != 'F'); //Loop ate o usuario decidir fechar o programa

EsvaziaPilha(&p); //Esvazia a memoria alocada para a pilha

return 0;
}

//Inicializa a pilha
void CriaPilha(Pilha *p){

    p->topo = NULL;
    p->tam = 0;
}

//Mostra todo o conteudo da pilha
void MostraPilha(Pilha *p){
    No *Aux;
    Aux = p->topo;

    if(p->topo){
        printf("\nPilha tamanho : %i\n",p->tam);
        printf("Topo-> ");
        while(Aux){

            printf("%i, ",Aux->num);
            Aux = Aux->prox;
        }   
    }
}

//Cria um nó no topo da pilha
void CriaNo(Pilha *p){
    No *NovoNo = malloc(sizeof(No));
    if(NovoNo){
        NovoNo->prox = p->topo;
        NovoNo->num = 0;
        p->topo = NovoNo;
        p->tam++;
    }
    else{
        printf("\nFalha na criação do No");
    }
}
//Esvazia a pilha
void EsvaziaPilha(Pilha *p){
    No *Aux;
    Aux = p->topo;

    if(p->topo){

        do{
            Aux = p->topo;
            p->topo = Aux -> prox;
            free(Aux);
        }while(Aux);

        p->tam = 0;
        printf("\nPilha esvaziada");
    }

    else{
        printf("\nPilha ja esta vazia");
    }

    
}

//Adiciona um digito ao valor da pilha
void AdicionaNumero(Pilha *p, int valor){
    int valorpilha = p->topo->num;
    
    p->topo->num = valorpilha*10 + valor;
    printf("\nNovo valor no topo: %i",p->topo->num);

}

//Subtrai dois valores no topo da pilha
void Subtrai(Pilha *p){
    No *Aux;
    int resultado;

    Aux = p->topo;
    p->topo = Aux->prox;
    resultado = p->topo->num - Aux->num;
    p->topo->num = resultado;
    free(Aux);
    p->tam--;
    printf("\nResultado da operacao '-': %i",p->topo->num);

}

//Soma dois valores no topo da pilha
void Soma(Pilha *p){
    No *Aux;
    int resultado;

    Aux = p->topo;
    p->topo = Aux->prox;
    resultado = p->topo->num + Aux->num;
    p->topo->num = resultado;
    free(Aux);
    p->tam--;
    printf("\nResultado da operacao '+': %i",p->topo->num);

}

//Multiplica dois valores no topo da pilha
void Multiplica(Pilha *p){
    No *Aux;
    int resultado;

    Aux = p->topo;
    p->topo = Aux->prox;
    resultado = p->topo->num * Aux->num;
    p->topo->num = resultado;
    free(Aux);
    p->tam--;
    printf("\nResultado da operacao '*': %i",p->topo->num);

}

//Divide dois valores no topo da pilha
void Divide(Pilha *p){
    No *Aux;
    int resultado;

    Aux = p->topo;

    if(Aux->num != 0){
        p->topo = Aux->prox;
        resultado = p->topo->num / Aux->num;
        p->topo->num = resultado;
        p->tam--;
        free(Aux);
        printf("\nResultado da operacao '/': %i",p->topo->num);
    }
    else{
        printf("\nNao se divide por 0");
    }

}