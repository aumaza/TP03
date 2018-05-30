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
        printf("\n1. Agregar pelicula");
        printf("\n2. Borrar pelicula");
        printf("\n3. Modificar Pelicula");
        printf("\n4. Generar pagina web");
        printf("\n5. Listar Peliculas");
        printf("\n================================\n\n");
        printf("\n6. Salir\n");
        printf("\n================================\n");
        printf("\nOpcion: ");
        scanf("%d",&opcion);
        getchar();
        printf("\n================================\n");

        switch(opcion)
        {
            case 1: initReg(movie,TAM);
                    agregarPelicula(movie,TAM); break;
            case 2: borrarRegistro(movie,TAM); break;
            case 3: modificarDato(movie,TAM); break;
            case 4: break;
            case 5: mostrarPeliculas(movie,TAM); break;

            //break;
        }
    } while(opcion!=6);

    printf("\nHA DECIDIDO SALIR!");
    printf("\nHASTA LUEGO.-");
    printf("\n\n================================\n");

    return 0;
}
