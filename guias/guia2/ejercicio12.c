#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NAME_LEN 50
typedef struct persona_s{
        char nombre[NAME_LEN + 1];
        int edad;
        struct persona_s *hijo;
} persona_t;

persona_t *crearPersona(const char *nombre, int edad);
void eliminarPersona(persona_t *persona);

int main(){
        persona_t *persona = crearPersona("javier", 45);
        printf("persona: %s, edad: %d .\n", persona->nombre, persona->edad);
        eliminarPersona(persona);
        return 0;
}

persona_t *crearPersona(const char *nombre, int edad){
        persona_t *persona = malloc(sizeof(persona_t));
        persona->edad = edad;
        persona->hijo = NULL;
        strcpy(persona->nombre, nombre);
        return persona;
}

void eliminarPersona(persona_t *persona){
        free(persona);
}