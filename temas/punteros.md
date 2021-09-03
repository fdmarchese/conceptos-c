# Struct

Un puntero o apuntador es un tipo de variable que tendrá como valor una posición de memoria de un dato al cual `apunta`.

Ejemplo básico de un puntero en c:
```c
// se declara un puntero de tipo entero y se lo inicializa en NULL
int *puntero = NULL;
```

Como se muestra en el ejemplo anterior, se suele inicializar los punteros con el valor `NULL` 

## Operador &

El operador `&` juega un papel importante en los punteros de c ya que a través del uso del mismo podemos obtener la dirección de memoria donde se encuentra una determinada variable.

```c
int x = 6;
int *p = &x; // el puntero p tiene el valor de la dirección de memoria de la variable x
```

## Operador *

El operador `*` cumple dos papeles en el uso de punteros en c. Por un lado se utiliza en la definición de un tipo puntero:

`<tipo de dato>` *`<nombre de la variable>` = NULL;
 
por ejemplo:
```c
int *puntero = NULL;
```

La otra función que cumple el operador `*` es la indirección.
La indirección refiere a que desde una variable de tipo puntero se pueda acceder al valor de la variable a la cual apunta.
Concretamente:

```c
int main()
{
    int x = 6;
    int *p = &x; // p apunta a x

    printf("el valor de x es: %d \n", x); // muestra el valor de la variable x
    printf("el valor de p es: %p \n", p); // muestra el valor de la dirección de memoria de x
    printf("el valor al cual apunta p es: %d \n", *p); // accede al valor de x a través de p
}
```

[Volver](/README.md)
