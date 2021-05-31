# switch

Sintaxis básica de una sentencia switch en C:

```c
switch(variable)
{
  case const1:
    sentencia;
    break;
  case const2:
    sentencia;
    break;
  ...
  default:
    sentencia;
}
```

Ejemplo concreto de uso de un switch case en C:

```c
int x = 10, y = 5;
char opcion;
printf("Elija una operación a realizar con %d y %d:\n", x, y);
printf("Para sumar use +\n");
printf("Para restar use -\n");
scanf(" %c", &opcion);

switch(opcion)
{
  case '+':
    printf("%d + %d = %d", x, y, x + y);
    break;
  case '-':
    printf("%d - %d = %d", x, y, x - y);
    break;
  default:
    printf("La opción seleccionada no es válida");
}
```

[Volver](/README.md)
