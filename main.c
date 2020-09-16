#include <stdio.h>
#define CANTIDAD_ENTEROS 5
void capturaEnteros();
int menuPrograma();
int main(){
    int continuarPrograma;
    continuarPrograma=1;
    do
    {
        switch(menuPrograma())
        {
        case 1: capturaEnteros(); break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            continuarPrograma=0;
            break;
        default:
            printf("Opcion no valida\n");
        }
        if(continuarPrograma)
        {
            getchar();
            printf("Presione entrar para continuar...");
            getchar();
        }
    }
    while(continuarPrograma);
    return 0;
}
int menuPrograma()
{
    int opcion;
    printf("MENU:\n");
    printf("1) Capturar numeros enteros\n");
    printf("2) Mostrar texto\n");
    printf("3) Menu personaje\n");
    printf("4) Salir\n");
    printf("Opcion: ");
    scanf("%d",&opcion);
    return opcion;
}
void capturaEnteros()
{
    int enteros[CANTIDAD_ENTEROS];
    int i, suma;
    float promedio;
    for(i=0; i<CANTIDAD_ENTEROS; i++)
    {
        printf("Dame el entero #%d: ",i+1);
        scanf("%d",&enteros[i]);
    }
    for(i=0,suma=0;i<CANTIDAD_ENTEROS;i++)
    {
        suma+=enteros[i];
    }
    promedio=(float)suma/CANTIDAD_ENTEROS;
    printf("Suma: %d\n",suma);
    printf("Promedio: %0.2f\n",promedio);
}
