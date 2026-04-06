#include <stdio.h>

int main() {
        int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
        102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
        103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
        111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};

        /*calculamos long para armar el array de chars*/
        size_t length = sizeof(mensaje_secreto) / sizeof(int);
        char decoded[length];

        /*en cada lugar del arreglo ponemos su casting a char*/
        for (size_t i = 0; i < length; i++) {
                decoded[i] = (char) (mensaje_secreto[i]);
        }

        /*imprimimos*/
        for (size_t i = 0; i < length; i++) {
                printf("%c", decoded[i]);
        }

        printf("\n");

        return 0;
}