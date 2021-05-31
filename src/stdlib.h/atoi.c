#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[20];

    printf("Ingrese una cadena a transformar a entero: ");
    scanf("%s", cadena);
    printf("La cadena %s se traduce en el entero: %d.", cadena, atoi(cadena));

    return 0;
}