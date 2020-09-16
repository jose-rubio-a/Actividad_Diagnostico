#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <stdio.h>
#define CANTIDAD_PERSONAJES 5
#define TAMANO_NOMBRE 25
#define TAMANO_TIPO 15
unsigned int cont=0;
struct Personaje
{
    char nombre[TAMANO_NOMBRE+1];
    char tipo[TAMANO_TIPO+1];
    int fuerza;
    int salud;
}personajes[CANTIDAD_PERSONAJES];
void capturaPersonaje()
{
    if(cont<CANTIDAD_PERSONAJES)
    {
        printf("Nombre: ");
        getchar();
        fgets(personajes[cont].nombre,TAMANO_NOMBRE+1,stdin);
        printf("Tipo: ");
        fgets(personajes[cont].tipo,TAMANO_TIPO+1,stdin);
        printf("Fuerza: ");
        scanf("%d",&personajes[cont].fuerza);
        printf("Salud: ");
        scanf("%d",&personajes[cont].salud);
        cont++;
    }
    else
    {
        printf("Arreglo de personajes lleno!\n");
    }
}
void mostrarPersonajes()
{
    int i;
    for(i=0;i<cont;i++)
    {
        printf("Nombre: %s",personajes[i].nombre);
        printf("Tipo: %s",personajes[i].tipo);
        printf("Fuerza: %d\n",personajes[i].fuerza);
        printf("Salud: %d\n",personajes[i].salud);
        printf("\n");
    }
}
#endif