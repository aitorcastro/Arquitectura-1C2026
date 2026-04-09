#include <stdio.h>

typedef struct {
        char name[50];
        int vida;
        double ataque;
        double defensa;
}monstruo_t;

monstruo_t monstruos[] = {
        {"demo", 10, 50, 20},
        {"vecma", 100, 100, 100}
};


int main() {
        printf("Mounstros de st: \n");
        printf("Nombre: %s. Vida: %d \n", monstruos[0].name, monstruos[0].vida);
        printf("Nombre: %s. Vida: %d \n", monstruos[1].name, monstruos[1].vida);

}