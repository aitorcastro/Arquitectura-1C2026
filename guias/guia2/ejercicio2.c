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

monstruo_t evolution(monstruo_t mons){
        mons.ataque += 10;
        mons.defensa += 10;
        return mons;
}

int main(){
        printf("EVOLUTION (%s): \n", monstruos[1].name);
        printf("Antes- ataque: %f, defensa: %f \n", monstruos[1].ataque, monstruos[1].defensa);
        monstruo_t evolucionado = evolution(monstruos[1]);
        printf("Despues- ataque: %f, defensa: %f \n",evolucionado.ataque, evolucionado.defensa);
}