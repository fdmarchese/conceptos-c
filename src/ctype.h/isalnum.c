#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter a evaluar: ");
    scanf("%c", &caracter);

    if (isalnum(caracter) != 0)
    {
        printf("%c es un caracter alfanumerico.", caracter);
    }
    else
    {
        printf("%c NO es un caracter alfanumerico.", caracter);
    }

    return 0;
}