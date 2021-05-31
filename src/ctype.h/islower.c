#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter a evaluar: ");
    scanf("%c", &caracter);

    if (islower(caracter) != 0)
    {
        printf("%c es minuscula.", caracter);
    }
    else
    {
        printf("%c NO es minuscula.", caracter);
    }

    return 0;
}