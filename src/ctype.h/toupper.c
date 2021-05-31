#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter a transformar en mayuscula: ");
    scanf("%c", &caracter);
    printf("El caracter %c en mayuscula es: %c.", caracter, toupper(caracter));

    return 0;
}