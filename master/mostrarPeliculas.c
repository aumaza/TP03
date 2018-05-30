#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 2

void mostrarPeliculas (EMovie movie[], int cant)
{
    int i;

    printf("\n===============LISTADO PELICULAS=================\n");

    for(i=0; i<cant; i++)
    {
        printf("\n======================================\n");
        printf("\n%i.ID: %d", i+1, movie[i].id);
        printf("\n%i.TITULO: %s", i+1, movie[i].titulo);
        printf("\n%i.GENERO: %s", i+1, movie[i].genero);
        printf("\n%i.DURACION: %d", i+1, movie[i].duracion);
        printf("\n%i.DESCRIPCION: %s", i+1, movie[i].descripcion);
        printf("\n%i.PUNTAJE: %d", i+1, movie[i].puntaje);
        printf("\n======================================\n");

    }

}
