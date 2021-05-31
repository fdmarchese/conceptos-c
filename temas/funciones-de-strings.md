# Funciones de strings

Algunas de las funciones más comunes cuando se necesita tratar cadenas de caracteres son:

```c
#include <string.h>
char* strcpy(char* destino, const char* origen);
```

`copia el string de origen al de destino.` [Ejemplo](/src/string.h/strcpy.c)

---

```c
#include <string.h>
char *strcat(char *destino, const char *origen);
```

`concatena el string de destino y el de origen y deja el resultado en el de destino.` [Ejemplo](/src/string.h/strcat.c)

---

```c
#include <string.h>
size_t strlen(const char *source); // size_t es un entero sin signo
```

`Cuenta la cantidad de caracteres que se encuentran en origen sin considerar los caracteres nulos.` [Ejemplo](/src/string.h/strlen.c)

---

```c
#include <string.h>
int strcmp (const char* str1, const char* str2);
```

`compara dos cadenas de caracteres y si son iguales retorna 0.` [Ejemplo](/src/string.h/strcmp.c)

---

```c
#include <stdlib.h>
int atoi(const char *cadena); // recordar que en c los caracteres son tratados como números
```

`Retorna una representación entera de la cadena ingresada como parámetro. Si la cadena ingresada como parámetro no es un entero entonces retorna 0.` [Ejemplo](/src/stdlib.h/atoi.c)

---

[Volver](/README.md)
