#include <stdio.h>
#include <string.h>

int main(){
        char str[] = "Hola";
        char dest[100] = "basura";

        printf("dest: %s\n", dest);
        printf("dest (luego de strcpy): %s\n", strcpy(dest, str));

        printf("dest (luego de strcat): %s\n", strcat(dest, str));

        printf("length de dest: %d\n", strlen(dest));

        printf("strcmp: %d\n", strcmp(str, str));
}