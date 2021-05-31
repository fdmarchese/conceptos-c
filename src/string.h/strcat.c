#include <stdio.h>
#include <string.h>

int main()
{
    char destino[100] = "Concatenando un ";
    char origen[] = "string con strcat()";

    // concatena destino y origen y almacena el resultado en destino.
    strcat(destino, origen);

    printf("El valor de origen es: %s \n", origen);
    printf("El valor de destino es: %s \n", destino);

    return 0;
}