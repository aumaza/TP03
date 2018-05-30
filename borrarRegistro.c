#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 2


void borrarRegistro(EMovie movie[],int id)
{
    int i;
    int index;


    i = pideDato();
    index = buscaID(movie,i);

   if(index !=-1)
    {
        movie[index].est=ON;
        movie[index].id=ON;
        printf("\nEL REGISTRO HA SIDO ELIMINADO.-\n\n\n\n");
    }

    else
    {
      printf("Registro no encontrado!!!\n");

     }

}
