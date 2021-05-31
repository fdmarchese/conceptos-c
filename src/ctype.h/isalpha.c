#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter a evaluar: ");
    scanf("%c", &caracter);

    if (isalpha(caracter) != 0)
    {
        printf("%c es un caracter alfabetico.", caracter);
    }
    else
    {
        printf("%c NO es un caracter alfabetico.", caracter);
    }

    return 0;
}