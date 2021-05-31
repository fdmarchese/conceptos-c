# vectores & matrices

## vectores

```c
// declaración de un vector
int vector[2]; // array de enteros de 1 dimensión y 2 elementos.

// inicialización de vectores
int vector[3] = { 3, 5, -7};
// si no se especifica el tamaño explícitamente el mismo se infiere de la cantidad de elementos asignados (en este ejemplo 3).
int vector[] = { 3, 5, -7};
```

Ejemplo práctico en el uso de vectores en C:

```c
    int vector[3];
    
    printf("Se le solicita al usuario que ingrese los elementos del vector:\n");
    
    for (int i = 0; i < 3; i++)
    {
        printf("ingrese el elemento nro %d:", i + 1); // se le muestra al usuario la posición en número natural, por eso el + 1.
        scanf("%d", &vector[i]); // se accede al vector con índice i (desde cero a 2)
    }

    printf("\nLos elementos del vector son:\n");

    printf("Primer elemento del vector: %d\n", vector[0]); // notar que el elemento en la posición 0 del vector es el primero
    printf("Segundo elemento del vector: %d\n", vector[1]); // el elemento en la posición 1 es el segundo
    printf("Tercer elemento del vector: %d\n", vector[2]); // y el elemento en la posición 2 es el tercero
```

## matrices

Las matrices son vectores multidimensionales.

```c
// declaración de una variable de tipo matríz.
int matriz[2][2]; // matriz de enteros de 2x2
```

[Volver](/README.md)
