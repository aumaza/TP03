#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define TAM 2

int busquedaxID(EMovie movie[], int id)

{

int i;
int flag=-1;
int TAMANIO=2;

    if(movie!=NULL)
  {
        for(i=0;i<TAMANIO;i++)
        {
            if(id==movie[i].id)
            {
                printf("\nATENCION!!!---SE MODIFICARAN LOS SIGUIENTES DATOS");
                printf("\nTITULO: %s", movie[i].titulo);
                printf("ID: %d\n", movie[i].id);
                flag=i;
                break;
            }

        }
  }
  return flag;
}
