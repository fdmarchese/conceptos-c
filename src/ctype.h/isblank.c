#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter[] = {'y', ' ', '\n', '\t', '4'};

    for (int i = 0; i < 5; i++)
    {
        if (isblank(caracter[i]) != 0)
        {
            printf("%c es un espacio.\n", caracter[i]);
        }
        else
        {
            printf("%c NO es un espacio.\n", caracter[i]);
        }
    }

    return 0;
}