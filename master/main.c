#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define TAM 2

int main()
{
    EMovie movie[TAM];
    //*movie = movie;

    int opcion;

   do
    {
        printf("\n================================\n");
        printf("\n==========VIDEO==CLUB===========\n\n");
        printf("1. Agregar pelicula\n");
        printf("2. Borrar pelicula\n");
        printf("3. Generar pagina web\n");
        printf("4. Listar Peliculas\n");
        printf("\n================================\n\n");
        printf("5. Salir\n");
        printf("\n================================\n");
        printf("\nOpcion: ");
        scanf("%d",&opcion);
        getchar();
        printf("\n================================\n");

        switch(opcion)
        {
            case 1: initReg(movie,TAM);
                    agregarPelicula(movie,TAM);  break;
            case 2: break;
            case 3: break;
            case 4: mostrarPeliculas(movie,TAM); break;

            //break;
        }
    } while(opcion!=5);

    return 0;
}
