#include <stdio.h>
#include "personaje.h"

void capturar_enteros(){
    int enteros[5];
    float promedio;
    int suma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma += enteros[i];
    }
    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", suma/5.0);

    
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    
}

int main(){
    char opcion;
    char cadena[20];
    int n;

    do
    {
        printf(" 1) Capturar enteros \n");
        printf(" 2) Mostrar cadena n veces \n");
        printf(" 3) Agregar personaje \n");
        printf(" 4) Mostrar personaje \n");
        printf(" 0) Salir \n");
        scanf("%c", &opcion);

        switch (opcion)
        {
        case '1':
            capturar_enteros();
            break;

        case '2':
            printf("Escribe una cadena (max 30 caracteres): ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("n: ");
            scanf("%i", &n);
            mostrar(n, cadena);
            break;

        case '3':
            capturar_personajes();
            break;
        
        case '4':
            mostrar_personajes();
            break;
        
        default:
            break;
        }

        fflush(stdin);

    } while (opcion != '0');
    

    return 0;
}