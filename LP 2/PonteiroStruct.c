#include <stdio.h>
#include <stdlib.h>




typedef struct{
    char String50[50];
    char *ptrE;

}TD;
typedef struct{
    int idade;
    char cpf[12];
    TD *ptrD;

}TC;

typedef struct{
    int Vetor10int;
    char String10[10];
    TC *ptrC;
}TB;

typedef struct{
    char String10[10];
    int  Cint;
    float Cfloat;
    TB *ptrB;
}TA;

int main(){

char string2[2];
TA *ptrA;

    ptrA = malloc(sizeof(TA));
    if (ptrA == NULL) {
        fprintf(stderr, "Memory allocation failed for ptrA\n");
        return 1;
    }

    ptrA -> ptrB = malloc(sizeof(TB));
    if (ptrA->ptrB == NULL) {
        fprintf(stderr, "Memory allocation failed for ptrB\n");
        free(ptrA);
        return 1;
    }

    ptrA -> ptrB -> ptrC = malloc(sizeof(TC));
    if (ptrA->ptrB->ptrC == NULL) {
        fprintf(stderr, "Memory allocation failed for ptrC\n");
        free(ptrA->ptrB);
        free(ptrA);
        return 1;
    }

    ptrA -> ptrB -> ptrC -> ptrD = malloc(sizeof(TD));
     if (ptrA->ptrB->ptrC->ptrD == NULL) {
        fprintf(stderr, "Memory allocation failed for ptrD\n");
        free(ptrA->ptrB->ptrC);
        free(ptrA->ptrB);
        free(ptrA);
        return 1;
    }
    ptrA -> ptrB -> ptrC -> ptrD -> ptrE = malloc(2*sizeof(char));
    if (ptrA->ptrB->ptrC->ptrD->ptrE == NULL) {
        fprintf(stderr, "Memory allocation failed for ptrE\n");
        free(ptrA->ptrB->ptrC->ptrD);
        free(ptrA->ptrB->ptrC);
        free(ptrA->ptrB);
        free(ptrA);
        return 1;
    }
ptrA -> ptrB -> ptrC -> ptrD -> ptrE = &string2;

    free(ptrA->ptrB->ptrC->ptrD->ptrE);
    free(ptrA->ptrB->ptrC->ptrD);
    free(ptrA->ptrB->ptrC);
    free(ptrA->ptrB);
    free(ptrA);



return 0;
}

