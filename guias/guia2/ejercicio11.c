#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint16_t *secuencia(uint16_t n)
{ // toma un uint16 n -> devuelve un puntero a el inicio del arreglo de n espacios
        uint16_t *arr = calloc(n, sizeof(uint16_t));
        if (arr == NULL)
        {
                // Manejar el error de asignaci´on de memoria
                return NULL;
        }
        for (uint16_t i = 0; i < n; i++) // inicializo, [0] = 0, [1] = 1, etc.
                arr[i] = i;
        return arr; // devuelvo el puntero a primera posicion.
}

int main()
{
        uint16_t n = 10;
        uint16_t *arr = secuencia(n);
        if (arr == NULL)
        {
                // Manejar el error de asignaci´on de memoria
                return 1;
        }
        for (uint16_t i = 0; i < n; i++)
                printf("%d\n", arr[i]);
        free(arr); // Liberar la memoria reservada
        return 0;
}
