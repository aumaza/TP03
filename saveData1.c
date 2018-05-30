#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 2

void saveData1 (EMovie movie[], int cant)
{

    FILE *save;

    save = fopen("listaPeliculas.txt","w");
    fwrite(&movie,sizeof(EMovie),cant,save);
    fclose(save);


}
