# Memoria Dinámica

La memoria dinámica es la forma que tenemos de reservar direcciones y espacios de memoria en tiempo de ejecución de forma `dinámica`. 
Podemos hacer uso tanto de la memoria estática (stack) y la memoria dinámica (heap).

## Funciones para usar memoria dinámica

En c contamos con algunas funciones que nos ayudan a hacer uso de la memoria dinámica tales como `malloc` `calloc` `realloc` y `free`. 

### Función malloc

La función `malloc` reserva un bloque de memoria y retorna un puntero void al inicio de la misma. 
Definición de la función: 

```c
void *malloc(size_t size);
```

Ejemplo básico de malloc en c:
```c
// se declara un puntero de tipo entero y se lo inicializa en NULL
int *entero = NULL;
entero = malloc(sizeof(int));
```

### Función calloc

La función `calloc` es similar a `malloc`, pero a diferencia de la anterior ésta incializa a 0 la memoria reservada. Se usa comúnmente para arreglos y matrices. 
Definición de la función:

```c
void *calloc(size_t nmemb, size_t size);
```

Ejemplo básico de calloc en c:

```c
int *vector = NULL;
int cant_elems = 5;

/* Reservar memoria para almacenar n enteros */
vector = calloc(cant_elems, sizeof(int));
```

### Función realloc

La función `realloc` redimensiona el espacio de memoria asignado de forma dinámica anteriormente a un puntero. 

Definición de la función:

```c
/*
 * redimensiona un puntero
 * @params ptr: puntero a redimensionar
 * @params size: nuevo tamaño que debe tener el puntero
*/
void *realloc(void *ptr, size_t size);
```

Ejemplo básico de realloc en c:

```c
// se declara un vector de 2 posiciones
int *vector = malloc(sizeof(int) * 2);

// se redimensiona el vector a 10 posiciones
int *tmp_vector = realloc(vector, sizeof(int) * 10);

if (tmp_vector == NULL) {
    // Error
}
else {
    // Se pudo reasignar exitosamente
    vector = tmp_vector;
}
```

### Función free

La función `free` sirve para liberar memoria que fue asignada dinámicamente. Si el puntero es nulo, la función `free` no hace nada. 

Definición de la función: 
```c
void free(void *ptr);
```

Ejemplo básico de malloc en c: 
```c
int *entero;
entero = malloc(sizeof(int));
free(entero);

// Por buenas prácticas, luego de hacer free el puntero debe apuntar a NULL
entero = NULL;
```

[Volver](/README.md)
