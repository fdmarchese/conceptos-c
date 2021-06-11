# Struct

Sintaxis básica de una estructura en C:

```c
typedef struct
{
    // atributos de la estructura
} MiEstructura;
```

Ejemplo concreto de uso de un srtuct en C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Defino mi estructura con todos sus miembros.
    Esto quiere decir que cuando cree variables del tipo "Alumno" dichas variables van a tener los miembros que se definan acá. 
*/
struct Alumno
{
    char Nombre[30]; // miembro "Nombre" de tipo cadena de caracteres
    char Apellido[30]; // miembro "Apellido" de tipo cadena de caracteres
    float Promedio; // miembro "Promedio" de tipo cadena de caracteres
};

int main()
{
    struct Alumno alumno; // declaro una variable llamada alumno de tipo "Alumno"
    return 0;
}
```

## Otra forma de escribir los struct

En c disponemos de otra forma de declarar estructuras adicionalmente a la que se ve en el ejemplo anterior.  
Aquí se ve la declaración de la misma estructura utilizando `typedef`:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Defino mi estructura con todos sus miembros.
    Esto quiere decir que cuando cree variables del tipo "Alumno" dichas variables van a tener los miembros que se definan acá. 
*/
typedef struct
{
    char Nombre[30]; // miembro "Nombre" de tipo cadena de caracteres
    char Apellido[30]; // miembro "Apellido" de tipo cadena de caracteres
    float Promedio; // miembro "Promedio" de tipo cadena de caracteres
} Alumno;

int main()
{
    Alumno alumno; // declaro una variable llamada alumno de tipo "Alumno"
    return 0;
}
```

Utilizando esta metodología lo que estamos haciendo es definiendo un tipo "Alumno" que es de tipo estructura con los miembros definidos, por eso podemos utilizarlo en main sin la palabra `struct` en la declaración de la variable alumno.

## Acceder a los miembros de una variable de tipo struct

Considerando el ejemplo anterior donde tenemos definida la estructura `Alumno`, dentro de la variable alumno que es de tipo `Alumno` vamos a poder acceder a los miembros definidos en la estructura. Esto se puede hacer a través del uso del punto `.`.

```c
    struct Alumno alumno; // declaro una variable llamada alumno de tipo "Alumno"

    // puedo acceder a los miembro de la variable alumno de la siguiente forma:
    strcpy(alumno.Nombre, "Juan"); // asigno el valor "Juan" al miembro "Nombre" de la variable alumno
    strcpy(alumno.Apellido, "Perez"); // asigno el valor "Perez" al miembro "Apellido" de la variable alumno
    alumno.Promedio = 9.9; // asigno un valor al miembro "Promedio" de la variable alumno

```

## Referencia de ejemplo sencillo

[Acá](/src/structs/basic-struct.c) hay una referencia con un ejemplo sencillo en el uso de estructuras.

[Volver](/README.md)
