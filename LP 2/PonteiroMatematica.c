#include <stdio.h>

struct horario{
 int hora;
 int minuto;
 int segundos;
};

int main(){
struct horario agora,*depois,antes;
int soma = 200;

depois = &agora;

depois->hora = 20;
depois->minutos = 20;
depois->segundos = 20;





return 0;
}
