#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

int respuesta()

{
    char resp;


    printf("\nDesea salir? S(si) / N(no): ");
    fflush(stdin);
    scanf("%s",&resp);
    resp=toupper(resp);
    while(resp!='S'&& resp!='N')
    {
      printf("\nDebe ingresar S(si) N(no)\n");
      scanf("%s",&resp);
      resp=toupper(resp);
    }

    return resp;
}
