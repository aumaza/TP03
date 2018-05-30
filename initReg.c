#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 2

int initReg(EMovie movie[],int cant)
{
   int i;
   int retorno=-1;
   if(cant > 0 && movie != NULL)
   {
       for(i=0;i<cant;i++)
       {
           retorno=0;
           movie[i].est=OFF;

        }
   }
    return retorno;
}
