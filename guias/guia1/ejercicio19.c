#include <stdio.h>

int g = 10;

void functionA() {
        int a = 20;
        static int b = 30;
        printf("Dentro de functionA:\n");
        printf(" g = %d\n", g); 
        printf(" a = %d\n", a); 
        printf(" b = %d\n", b);
        // Modificaci´on de las variables
        g += 5;
        a += 10;
        b += 5;
}
void functionB() {
        int a = 40;
        static int c = 50;
        printf("\nDentro de functionB:\n");
        printf(" g = %d\n", g);
        printf(" a = %d\n", a);
        printf(" c = %d\n", c);
        // Modificaci´on de las variables
        g += 5;
        a += 10;
        c += 5;
}
int main() {
        printf("Dentro de main:\n");
        printf(" g = %d\n", g); //g = 10
        functionA(); // g = 10, a = 20, b = 30 -> g=15 (global), a=30 (se borra), b=35 (solo en FA)
        functionB(); // g = 15, a = 40, c = 50 -> g = 20, a = 50, c = 55.
        functionA(); // g = 20, a = 20, b = 35 -> g = 25, b = 45, a=30
        functionB(); // g= 25, a = 40, c = 55 -> g = 30
        printf("\nFinal en main:\n");
        printf(" g = %d\n", g);
        return 0;
}