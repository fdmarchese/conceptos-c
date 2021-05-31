#include <stdio.h>
#include <string.h>

int main()
{
    char origen[20] = "Esto es un ejemplo";
    char destino[20];

    // se realiza la copia de
    strcpy(destino, origen);

    printf("El valor de origen es: %s\n", destino);
    printf("El valor de destino es: %s", destino);

    return 0;
}