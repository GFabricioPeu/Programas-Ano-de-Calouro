/* 1 - Fatorial utilizando modularização - procedimento
#include<stdio.h>
void calculaFatorial(int n){
  int i, fat=1;
  for(i=1; i<=n; i++){
    fat = fat * i;
  }
  printf("\nO fatorial de %i é %i", n, fat);
}
int main(){
  int n, valor;
  printf("Digite um número para que seja calculado o fatorial dele: ");
  scanf("%i", &n);
  calculaFatorial(n);
  return 0;
}*/

/* 2 - Números Primos utilizando modularização - função
#include<stdio.h>
int numeroPrimo(int n){
  int i, cont=0;
  for(i=1; i<=n; i++){
    if(n%i==0){
      cont++;
    }
  }
  if(cont == 2){
    return 1;
  } else{
    return 0;
  }
}
int main(){
  int n, resultado;
  printf("Digite um número para saber se ele é primo: ");
  scanf("%i", &n);
  resultado = numeroPrimo(n);
  if(resultado == 1){
    printf("\nO número %i É PRIMO", n);
  }else{
    printf("\nO número %i NÃO É PRIMO", n);
  }
}*/



/*1 - Escreva um procedimento chamado tabuada que receba como parâmetro um valor entre 1 e 9 e imprima na tela a tabuada desse número.
#include<stdio.h>

void tabuada(int numero){
  int i;
  for(i=1; i<=10; i++){
    printf("\n%d x %d = %d", numero, i, numero*i);
  }
}
int main(){
  int numero=0;
  do{
    printf("Digite um número entre 1 e 9: ");
    scanf("%d", &numero);
  }while(numero < 1 || numero > 9);
  tabuada(numero);
  return 0;
}
*/

/*2 - Escreva uma função chamada maior que receba dois números como parâmetros e retorne o maior dentre eles.
#include<stdio.h>

int maior(int numero1, int numero2){
  if(numero1>numero2){
    return numero1;
  }
  else if(numero1==numero2){
    return numero1;
  }else{
    return numero2;
  }
}
int main(){
  int numero1, numero2, resultado;
  printf("Digite um número: ");
  scanf("%d", &numero1);
  printf("Digite outro número: ");
  scanf("%d", &numero2);
  resultado = maior(numero1, numero2);
  printf("\nEntre %d e %d, o maior é %d", numero1, numero2, resultado);
  return 0;
}
*/

/*3- Escreva um procedimento chamado maior_menor que receba 5 números como parâmetros e escreva o maior e o menor.
#include<stdio.h>
void maior_menor(int numeros[]){
  int i;
  int maior = numeros[0];
  int menor = numeros[0];
  for(i=0; i<5; i++){
    if(numeros[i] > maior){
      maior = numeros[i];
    }
    if(numeros[i] < menor){
      menor = numeros[i];
    }
  }
  printf("\nO maior número é %d", maior);
  printf("\nO menor número é %d", menor);
}
int main(){
  int vetor[5], i;
  for(i=0; i<5; i++){
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }
  maior_menor(vetor);
  return 0;
}*/

/*4 - Escreva uma função chamada metade que receba um número como parâmetro e se ele for maior do que 20, então retorne a metade do número, caso contrário retorne 0 (zero). O seu programa principal deve fazer o teste do valor retornado para imprimir ou não a metade do número.
#include<stdio.h>
int metade(float numero){
  if(numero > 20){
    return numero/2;
  }else{
    return 0;
  }
}

int main(){
  float numero, resultado;
  printf("Digite um número: ");
  scanf("%f", &numero);
  resultado = metade(numero);
  if(resultado != 0){
    printf("\nA metade de %.2f é %.2f", numero, resultado);
  }else{
    printf("\nO número %f é menor que 20", numero);
  }
  return 0;
}
*/

/*5 - Escreva uma função chamada múltiplo que receba um número como parâmetro e retorne o valor 1 (se ele for múltiplo de 3) ou 0 (caso ele não seja). O seu programa principal deve fazer o teste do valor retornado para imprimir a resposta para o usuário.
#include<stdio.h>
int multiplo(float numero){
  if((int)numero%3==0){
    return 1;
  }else{
    return 0;
  }
}
int main(){
  float numero, resultado;
  printf("Digite um número: ");
  scanf("%f", &numero);
  resultado = multiplo(numero);
  if(resultado != 0){
    printf("\nO número %.1f é múltiplo de 3", numero);
  }else{
    printf("\nO número %.1f não é múltiplo de 3", numero);
  }
  return 0;
}*/

/*6. Escreva um procedimento que receba um número inteiro n como parâmetro. Em seguida, ler n números da entrada e imprimir o triplo de cada um.
#include<stdio.h>
void triplo(int n){
  int i, vetor[n];
  for(i=0; i<n; i++){
    printf("\nDigite um número: ");
    scanf("%d", &vetor[i]);
  }
  for(i=0; i<n; i++){
    printf("\nO triplo de %d é %d", vetor[i], vetor[i]*3);
  }
}
int main(){
  int N, i;
  do{
    printf("\nDigite um número inteiro positivo: ");
    scanf("%d", &N);
  }while(N<=0);
  triplo(N);
  return 0;
}*/

/*7. Escreva um procedimento chamado media que receba como parâmetros a média final de 5 alunos e calcule a maior e a menor nota. Atenção: esse resultado não deve ser escrito dentro do procedimento. Use passagem de parâmetros por referência para que o seu programa principal possa escrever a maior e a menor nota.*/
#include <stdio.h>
#include <math.h>

void lerMediasFinais(float notas[],int tam){
    int i;
    for (i=0;i<tam;i++){
        printf("Digite a %ia nota final: ",i+1);
        scanf("%f",&notas[i]);
    }
}

void media(float notas[],int tam,float *menor,float *maior){
    int i;
    *menor = notas[0];
    *maior = notas[0];
    for (i=1;i<tam;i++){
        if (notas[i]>*maior){
            *maior = notas[i];
        }
        if (notas[i]<*menor){
            *menor = notas[i];
        }
    }
}

void imprimir(float vet[],int tam){
    int i;
    printf("Vet: ");
    for (i=0;i<tam;i++){
        printf("[%.2f]",vet[i]);
    }
    printf("\n");
}

int main(){
    float maior,menor;
    int tam=5;
    float notas[tam];

    lerMediasFinais(notas,tam);
    imprimir(notas,tam);

    media(notas,tam,&menor,&maior);
    printf("Maior: %f - Menor: %f\n",maior,menor);

    return 0;
}

/*8. Escreva uma função chamada triplo que recebe como parâmetro um número inteiro e retorna o triplo do número passado. O seu algoritmo principal deve conter um laço para receber 100 elementos e, usando a função triplo, exibir o triplo de todos os seus elementos.
#include<stdio.h>
int triplo(int numero){
  return numero*3;
}
int main(){
int i, numero, resultado;
  for(i=0; i<3; i++){
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    resultado = triplo(numero);
    printf("\nO triplo de %d é %d\n", numero, resultado);
  }
  return 0;
}*/

/*9. Escreva um procedimento que imprima todos os valores numéricos inteiros ímpares situados no intervalo entre dois números informados pelo usuário. Atenção: estes dois números devem ser obtidos no algoritmo principal e passados como parâmetros para o subprograma.
#include<stdio.h>
void impares(int n1, int n2){
  int i;
  printf("\nOs números ímpares entre %d e %d são: ", n1, n2);
  for(i=n1; i<=n2; i++){
    if(i%2==1){
      printf("\n%d", i);
    }
  }
}
int main(){
  int numero1, numero2;
  printf("Digite um número: ");
  scanf("%d", &numero1);
  do{
  printf("\nDigite um número (maior que o anterior): ");
  scanf("%d", &numero2);
    }while(numero2<=numero1);
  impares(numero1, numero2);
  return 0;
}*/

/*10. Faça um programa que execute as funções prevista no menu abaixo:
OPÇÕES
1. Calcula a HIPOTENUSA
2. Calcula a MÉDIA PONDERADA
3. Verifica primo
4. Termina o algoritmo
Considerações:
a) Use subprogramas para cada opção acima;
b) Ao se escolher a opção 1, deverá ser pedido os valores dos catetos e impresso a HIPOTENUSA;
c) Ao se escolher a opção 2, deverá ser pedido 4 notas e impressa a MÉDIA PONDERADA. Para calcular a média ponderada. Use os seguintes pesos para as notas: 2, 3, 2 e 3 respectivamente.
d) Ao se escolher a opção 3, deverá ser pedido um número e impresso se é primo ou não. */

/*#include<stdio.h>
#include<locale.h>
#include<math.h>
float hipotenusa(float c1, float c2){
  return sqrt(pow(c1,2)+pow(c2,2));
}
float mediaPonderada(float n1, float n2, float n3, float n4){
    return ((n1*2)+(n2*3)+(n3*2)+(n4*3))/10;
}
int numeroPrimo(int n){
    int i, cont=0;
    for(i=1; i<=n; i++){
        if(n%i==0){
            cont++;
        }
    }
    if(cont == 2){
        return 1;
    }else{
        return 0;
    }
}
int main(){
  setlocale(LC_ALL, "Portuguese");
  int opcao;
  float cateto1, cateto2, resultado;
  float nota1, nota2, nota3, nota4;
  int numero, primo;
  do{
    printf("OPÇÕES: \n1 - CALCULAR HIPOTENUSA \n2 - CALCULAR MÉDIA PONDERADA \n3 - VERIFICAR SE O NÚMERO É PRIMO \n4 - ENCERRAR ALGORITMO \n RESPOSTA: ");
    scanf("%d", &opcao);
    if(opcao == 1){
      printf("\nPARA O CÁLCULO DA HIPOTENUSA: ");
      printf("\nDigite o valor do primeiro cateto: ");
      scanf("%f", &cateto1);
      printf("\nDigite o valor do segundo cateto: ");
      scanf("%f", &cateto2);
      resultado = hipotenusa(cateto1, cateto2);
      printf("\nO valor da hipotenusa eh %.2f\n\n", resultado);
    }
    else if(opcao == 2){
      printf("\nPARA O CÁLCULO DA MÉDIA PONDERADA: ");
      printf("\nDigite o valor da primeira nota: ");
      scanf("%f", &nota1);
      printf("\nDigite o valor da segunda nota: ");
      scanf("%f", &nota2);
      printf("\nDigite o valor da terceira nota: ");
      scanf("%f", &nota3);
      printf("\nDigite o valor da quarta nota: ");
      scanf("%f", &nota4);
      resultado = mediaPonderada(nota1, nota2, nota3, nota4);
      printf("\nO valor da media eh %.2f\n\n", resultado);
    }
    else if(opcao == 3){
        printf("\nDigite um número: ");
        scanf("%d", &numero);
        primo = numeroPrimo(numero);
        if(primo == 1){
            printf("\nO número %d é primo\n\n", numero);
        }else{
            printf("\nO número %d não é primo\n\n", numero);
        }
    }
  }while(opcao!=4);
  printf("Código encerrado!!");
  return 0;
}*/
