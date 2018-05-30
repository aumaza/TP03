#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 2
#define ON 0
#define OFF 1

void modificarDato(EMovie movie[],int cant)
{

int index;



    index = busquedaxID(movie,cant);

   if(index !=-1)
    {
        movie[index].est=OFF;
        printf("\nIngrese el Titulo: ");
        fflush(stdin);
        fgets(movie[index].titulo, 60, stdin);
        printf("\n==================================\n");

        printf("\nLos datos han sido modificados!");
        printf("\n==================================\n");
    }

    else
    {
      printf("REGISTRO NO ENCONTRADO!!!\n");
      printf("\n==================================\n");

     }

}
