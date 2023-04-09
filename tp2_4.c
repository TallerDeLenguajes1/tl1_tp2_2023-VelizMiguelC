#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define cant 2

struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
};

void mostrarMaquinas(struct compu PC[], int tamanio);
void encontrarPCMasVieja(struct compu PC[], int tamanio);
void encontrarPCMayorVel(struct compu PC[], int tamanio);

int main(){
    srand(time(NULL));
    struct compu maquinas[cant];

    for (int i = 0; i < cant; i++)
    {
        printf("Ingrese la velociadad en GHZ\n");
        scanf("%d", &maquinas[i].velocidad);
        fflush(stdin);
        printf("Ingrese el anio\n");
        fflush(stdin);
        scanf("%d", &maquinas[i].anio);
        fflush(stdin);
        printf("Ingrese la cantidad\n");
        fflush(stdin);
        scanf("%d", &maquinas[i].cantidad);
        fflush(stdin);
        printf("Ingrese el tipo de cpu\n");
        fflush(stdin);
        scanf("%d", &maquinas[i].tipo_cpu);
        fflush(stdin);
    }
    mostrarMaquinas(maquinas, cant);
    encontrarPCMasVieja(maquinas, cant);
    encontrarPCMayorVel(maquinas,cant);
}

void mostrarMaquinas(struct compu PC[], int tamanio){
    for (int i = 0; i < cant; i++)
    {
        printf("Maquina n %d\n", i);
        printf("velocidad: %d\n", PC[i].velocidad);
        printf("anio: %d\n", PC[i].anio);
        printf("cantidad: %d\n", PC[i].cantidad);
        printf("tipo proc: %s\n", PC[i].tipo_cpu);


    }
    
}
void encontrarPCMasVieja(struct compu PC[], int tamanio) {
    struct compu pcMasVieja = PC[0];

    for (int i = 1; i < tamanio; i++) {
        if (PC[i].anio < pcMasVieja.anio) {
            pcMasVieja = PC[i];
        }
    }
     printf("velocidad: %d\n", pcMasVieja.velocidad);
        printf("anio: %d\n", pcMasVieja.anio);
        printf("cantidad: %d\n", pcMasVieja.cantidad);
        printf("tipo proc: %s\n", pcMasVieja.tipo_cpu);
}

void encontrarPCMayorVel(struct compu PC[], int tamanio) {
    struct compu pcVeloz = PC[0];

    for (int i = 1; i < tamanio; i++) {
        if (PC[i].velocidad > pcVeloz.velocidad) {
            pcVeloz = PC[i];
        }
    }
     printf("velocidad: %d\n", pcVeloz.velocidad);
        printf("anio: %d\n", pcVeloz.anio);
        printf("cantidad: %d\n", pcVeloz.cantidad);
        printf("tipo proc: %s\n", pcVeloz.tipo_cpu);
}