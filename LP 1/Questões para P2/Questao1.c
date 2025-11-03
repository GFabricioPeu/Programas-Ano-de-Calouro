#include <stdio.h>
#include <string.h>

void tiravogal_espaco(char texto[],int taman,int *tam){
int posi_atual=0,posi_nova=0,tamanhoN;
int i;

//Elimina as vogais e os espaços e mantem apenas as consoantes na string
while(posi_atual<taman){
    if(!(texto[posi_atual]=='a' || texto[posi_atual]=='e' || texto[posi_atual]=='i' || texto[posi_atual]=='o' || texto[posi_atual]=='u' || texto[posi_atual]==' ')){
        texto[posi_nova] = texto[posi_atual];
        posi_nova++; //Leva as consoantes ao inicio da string
    }
posi_atual++;
}
//Limpa espaços com caracteres que estao em posicoes nao preenchidas por consoantes
for(i=posi_nova;i<taman;i++){
    texto[i]=' ';
}

 *tam = posi_nova;

}

int main(){
char texto[100];
int tam;

printf("Digite um texto:\n");
scanf("%[^\n]s",texto);
tam = strlen(texto);

tiravogal_espaco(texto,tam,&tam);

printf(" %s",texto);
printf("\no novo tamanho eh de %i caracteres",tam);

return 0;
}

