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

    // puedo acceder a los miembro de la variable alumno de la siguiente forma:
    strcpy(alumno.Nombre, "Juan"); // asigno el valor "Juan" al miembro "Nombre" de la variable alumno
    strcpy(alumno.Apellido, "Perez"); // asigno el valor "Perez" al miembro "Apellido" de la variable alumno
    alumno.Promedio = 9.9; // asigno un valor al miembro "Promedio" de la variable alumno

    // de esa forma pude acceder a todos los miembros de la variable alumno y escribir valores en ellos.

    printf("El alumno generado tiene los siguientes datos: \n"); 
    printf("Nombre: %s\n", alumno.Nombre);
    printf("Apellido: %s\n", alumno.Apellido);
    printf("Promedio: %.2f\n", alumno.Promedio);

    return 0;
}
