#include <stdio.h>
#include <stdint.h>

int main(){
        uint32_t a = 0xA12D932A;
        uint32_t b = 0x23683FFD;

        /*quiero ver si los primeros 3 de a son iguales a los ultimos 3 de b*/
        a = a >>29;
        uint32_t mask = 0x0007;
        a = a & mask;
        b = b & mask;
        printf("%d \n", a == b);
}