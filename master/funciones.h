#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
    int id;
    int est;
    char titulo[60];
    char genero[20];
    int duracion;
    char descripcion[100];
    int puntaje;
    char linkImagen[50];
}EMovie;


/**
 *  Agrega una pelicula al archivo binario
 *  @param movie la estructura a ser agregada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo agregar la pelicula o no
 */
int agregarPelicula(EMovie movie[], int cant);

int initReg(EMovie movie[],int cant);
int buscarIdLibre (EMovie movie[]);
void mostrarPeliculas (EMovie movie[], int cant);



/**
 *  Borra una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
int borrarPelicula(EMovie movie);

/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param lista la lista de peliculas a ser agregadas en el archivo.
 *  @param nombre el nombre para el archivo.
 */
void generarPagina(EMovie lista[], char nombre[]);

/**
 *  Busca si hay id libre en el array
 *  @param recibe el array EMovie.
 *  @param nombre el nombre para el archivo.
 */

int buscarIdLibre (EMovie movie[]);

#endif // FUNCIONES_H_INCLUDED
