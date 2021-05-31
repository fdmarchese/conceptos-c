#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "test", str2[] = "teSt", str3[] = "test";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    printf("Se comparan los 3 strings:\n");

    // se compara str1 con str2. Si son iguales da 0
    if (strcmp(str1, str2) == 0)
    {
        printf("str1 y str2 son iguales\n");
    }
    else
    {
        printf("str1 y str2 son distintas\n");
    }

    // se compara str1 con str3. Si son iguales da 0
    if (strcmp(str1, str3) == 0)
    {
        printf("str1 y str3 son iguales\n");
    }
    else
    {
        printf("str1 y str3 son distintas\n");
    }

    // se compara str2 con str3. Si son iguales da 0
    if (strcmp(str2, str3) == 0)
    {
        printf("str2 y str3 son iguales\n");
    }
    else
    {
        printf("str2 y str3 son distintas\n");
    }

    return 0;
}