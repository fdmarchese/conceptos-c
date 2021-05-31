#include <stdio.h>
#include <string.h>

int main()
{
    // la palabra ejemplo
    char a[20] = "ejemplo";
    // la palabra ejemplo y se agrega un caracter nulo al final
    char b[20] = {'e', 'j', 'e', 'm', 'p', 'l', 'o', '\0'};
    int lengtha = 0, lengthb = 0;

    lengtha = strlen(a); // calculamos la longitud de a
    lengthb = strlen(b); // calculamos la longitud de b

    /* la longitud de a y de b son iguales ya que strlen ignora los caracteres nulos */
    printf("La longitud de a es: %d \n", lengtha);
    printf("La longitud de b es: %d \n", lengthb);

    return 0;
}