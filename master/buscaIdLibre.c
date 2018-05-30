#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

//#define TAM 20
#define ON 0
#define OFF 1

int buscarIdLibre (EMovie movie[])
{
int i;
int lim=20;
int pos=0;

if(lim>0 && movie !=NULL)
{
    for(i=0; i<lim; i++)
    {
        if(movie[i].est==OFF)
        {
            pos=i;
            break;
        }
    }
}
 return pos;
}
