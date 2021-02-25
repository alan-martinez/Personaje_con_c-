#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <stdio.h>
struct personajes
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
} personajes[5];

unsigned int contador = 0;

void capturar_personajes()
{
    if (contador < 5)
    {
        printf("Nombre: ");
        scanf("%s", personajes[contador].nombre);
        printf("Tipo: ");
        scanf("%s", personajes[contador].tipo);
        printf("Fuerza: ");
        scanf("%f", &personajes[contador].fuerza);
        printf("Salud: ");
        scanf("%i", &personajes[contador].salud);
        contador++;
    }
    else 
    {
        printf("El arreglo esta lleno!\n");
    }
}

void mostrar_personajes()
{
    for (size_t i = 0; i < contador; i++)
    {
        printf("Nombre: %s\n", personajes[i].nombre);
        printf("Tipo: %s\n", personajes[i].tipo);
        printf("Fuerza: %f\n", personajes[i].fuerza);
        printf("Salud: %i\n", personajes[i].salud);
    }
    
}

#endif