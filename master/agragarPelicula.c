#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 2

int agregarPelicula(EMovie movie[], int cant)
{

system("cls");

int i;

printf("\n==========CARGA PELICULAS===========\n\n");

for(i=0; i<cant; i++)
{

    printf("\nIngrese ID: ");
    scanf("%d", &movie[i].id);
    getchar();

    printf("\nIngrese el Titulo: ");
    fflush(stdin);
    fgets(movie[i].titulo, 20, stdin);

    printf("\nIngrese el Genero: ");
    fflush(stdin);
    fgets(movie[i].genero, 20, stdin);

    printf("\nDuracion: ");
    scanf("%d", &movie[i].duracion);
    getchar();

    printf("\nIngrese una breve descripcion: ");
    fflush(stdin);
    fgets(movie[i].descripcion, 50, stdin);

    printf("\nPuntaje: ");
    scanf("%d", &movie[i].puntaje);
    getchar();

    printf("\nLink a la imagen: ");
    fflush(stdin);
    fgets(movie[i].linkImagen, 50, stdin);

}

return 0;
getchar();
system("cls");
}
