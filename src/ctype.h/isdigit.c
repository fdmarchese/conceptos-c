#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter a evaluar: ");
    scanf("%c", &caracter);

    if (isdigit(caracter) != 0)
    {
        printf("%c es un caracter numerico.", caracter);
    }
    else
    {
        printf("%c NO es un caracter numerico.", caracter);
    }

    return 0;
}