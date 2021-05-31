#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter a transformar en minuscula: ");
    scanf("%c", &caracter);
    printf("El caracter %c en minuscula es: %c.", caracter, tolower(caracter));

    return 0;
}