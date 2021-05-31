# Funciones de caracteres

```c
#include <ctype.h>
int isalnum(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna 0 si el caracter es alfanumérico o retorna 1 caso contrario.` [Ejemplo](/src/ctype.h/isalnum.c)

---

```c
#include <ctype.h>
int isalpha(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna distinto de 0 si el caracter es alfabético o retorna cero caso contrario.` [Ejemplo](/src/ctype.h/isalpha.c)

---

```c
#include <ctype.h>
int isblank(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna distinto de 0 si el caracter es un espacio en blanco o retorna cero caso contrario. Solamente son considerados blank los caracteres ' ' y '\t'` [Ejemplo](/src/ctype.h/isblank.c)

---

```c
#include <ctype.h>
int isdigit(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna distinto de 0 si el caracter es numérico o retorna cero caso contrario.` [Ejemplo](/src/ctype.h/isdigit.c)

---

```c
#include <ctype.h>
int isspace(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna distinto de 0 si el caracter es un espacio o retorna cero caso contrario. Se consideran caracteres adicionales con respecto a isblank() tales como \n, \r, etc.` [Ejemplo](/src/ctype.h/isspace.c)

---

```c
#include <ctype.h>
int islower(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna distinto de 0 si el caracter es una minúscula o retorna cero caso contrario.` [Ejemplo](/src/ctype.h/islower.c)

---

```c
#include <ctype.h>
int isupper(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna distinto de 0 si el caracter es una mayúscula o retorna cero caso contrario.` [Ejemplo](/src/ctype.h/isupper.c)

---

```c
#include <ctype.h>
int toupper(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna el caracter pasado por parámetro como mayúscula.` [Ejemplo](/src/ctype.h/toupper.c)

---

```c
#include <ctype.h>
int tolower(int caracter); // recordar que en c los caracteres son tratados como números
```

`Retorna el caracter pasado por parámetro como minúscula.` [Ejemplo](/src/ctype.h/tolower.c)

[Volver](/README.md)
