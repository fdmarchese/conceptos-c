# If

Sintaxis básica de una sentencia condicional en C:

```c
if(condicion)
{
    // código a ejecutar en caso de que se cumpla la condición
}
else
{
    // código a ejecutar en caso de que NO se cumpla la condición
}
```

Ejemplo concreto de uso de un if en C:

```c
int x, y;

printf("Ingrese un numero:");
scanf("%d", &x);
printf("Ingrese otro numero:");
scanf("%d", &y);

if(x == y)
{
    printf("%d es igual a %d", x, y);
}
else
{
    printf("%d es distinto a %d", x, y);    
}
```

## El operador ?

El operador ? es un **operador ternario** que se usa para reemplazar las sentencias if/else con expresiones sencillas.
Podemos representar el último ejemplo de if escrito con operaciones ternarias de la siguiente forma:

```c
int x, y;

printf("Ingrese un numero:");
scanf("%d", &x);
printf("Ingrese otro numero:");
scanf("%d", &y);

x == y ? 
    printf("%d es igual a %d", x, y) : 
    printf("%d es distinto a %d", x, y);
```

[Volver](/README.md)
