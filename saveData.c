#include <stdio.h>
#include <stdlib.h>

#define TAM 2

void saveData (EMovie[], int cant)
{

    FILE *save;



    save = fopen("listaPeliculas.txt","w");
    fwrite(&movie,sizeof(EMovie),cant,*save);
    fclose(save);


}
