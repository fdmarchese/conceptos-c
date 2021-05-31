#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;

    printf("Ingrese un caracter a evaluar: ");
    scanf("%c", &caracter);

    if (isupper(caracter) != 0)
    {
        printf("%c es mayuscula.", caracter);
    }
    else
    {
        printf("%c NO es mayuscula.", caracter);
    }

    return 0;
}